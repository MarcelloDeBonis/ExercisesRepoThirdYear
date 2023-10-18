#include <iostream>
#include <vector>
#include <functional>

// Base class for all callable objects
template <typename ReturnType, typename... Args>
class Callable {
public:
    virtual ~Callable() = default;

    virtual ReturnType Invoke(Args... args) const = 0;
};

// Wrapper for function pointers
template <typename ReturnType, typename... Args>
class Function : public Callable<ReturnType, Args...> {
private:
    std::function<ReturnType(Args...)> func;

public:
    Function(std::function<ReturnType(Args...)> f) : func(f) {}

    ReturnType Invoke(Args... args) const override {
        return func(args...);
    }
};

// Wrapper for member function pointers
template <typename ReturnType, typename Object, typename... Args>
class Method : public Callable<ReturnType, Args...> {
private:
    Object& object;
    ReturnType (Object::*method)(Args...);

public:
    Method(Object& obj, ReturnType (Object::*meth)(Args...)) : object(obj), method(meth) {}

    ReturnType Invoke(Args... args) const override {
        return (object.*method)(args...);
    }
};

// Event class to store multiple callables and invoke them
template <typename ReturnType, typename... Args>
class Event : public Callable<void, Args...>{
private:
    std::vector<Callable<ReturnType, Args...>*> callables;

public:
    void Add(Callable<ReturnType, Args...>& callable) {
        callables.push_back(&callable);
    }

    void Invoke(Args... args) const override {
        for (auto& callable : callables) {
            callable->Invoke(args...);
        }
    }
    
};

// Example usage
class SampleClass {
public:
    void SayHello(const std::string& name) {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
};

// Example usage
class MathClass {
public:
    int Multiply(int a, int b) {
        std::cout << "Multiplying: " << a << " * " << b << " = ";
        return a * b;
    }
};

// Example usage
class MessageClass {
public:
    void DisplayMessage(const std::string& message) {
        std::cout << "Message: " << message << std::endl;
    }
};

int main() {
    Function<void, const std::string&> greetFunction([](const std::string& name) {
        std::cout << "Greetings, " << name << "!" << std::endl;
    });

    Function<int, int, int> addFunction([](int a, int b) {
        std::cout << "Adding: " << a << " + " << b << " = ";
        return a + b;
    });

    SampleClass obj;
    Method<void, SampleClass, const std::string&> greetMethod(obj, &SampleClass::SayHello);

    MathClass mathObj;
    Method<int, MathClass, int, int> multiplyMethod(mathObj, &MathClass::Multiply);

    MessageClass messageObj;
    Method<void, MessageClass, const std::string&> messageMethod(messageObj, &MessageClass::DisplayMessage);

    Event<void, const std::string&> stringEvent;
    stringEvent.Add(greetFunction);
    stringEvent.Add(greetMethod);
    stringEvent.Add(messageMethod);

    Event<int, int, int> mathEvent;
    mathEvent.Add(addFunction);
    mathEvent.Add(multiplyMethod);

    // Invoking all string-related functions/methods
    std::cout << "Invoking string-related functions/methods:\n";
    stringEvent.Invoke("Alice");
    
    // New line for separation
    std::cout << "\n";

    // Invoking all math-related functions/methods
    std::cout << "Invoking math-related functions/methods:\n";
    mathEvent.Invoke(5, 3); // This will invoke the addFunction and multiplyMethod

    return 0;
}

