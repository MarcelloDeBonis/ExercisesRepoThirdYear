#include <iostream>
#include <unordered_map>
#include <string>
#include <stdexcept>

template<typename TKey = std::string, typename TValue = void>
class Variables {
public:
    void Add(const TKey& key, const TValue& value) {
        if (data.find(key) != data.end()) {
            throw std::runtime_error("Key already exists.");
        }
        data[key] = value;
    }

    bool ContainsKey(const TKey& key) {
        return data.find(key) != data.end();
    }

    bool TryGetValue(const TKey& key, TValue& outValue) {
        auto it = data.find(key);
        if (it != data.end()) {
            outValue = it->second;
            return true;
        }
        return false;
    }

    void Remove(const TKey& key) {
        data.erase(key);
    }

    TValue& operator[](const TKey& key) {
        return data[key];
    }

    const TValue& operator[](const TKey& key) const {
        auto it = data.find(key);
        if (it == data.end()) {
            throw std::runtime_error("Key not found.");
        }
        return it->second;
    }

    size_t Count() const {
        return data.size();
    }

private:
    std::unordered_map<TKey, TValue> data;
};

int main() {
    Variables<std::string, int> dictionary;

    dictionary.Add("one", 1);
    dictionary.Add("two", 2);

    int value;
    if (dictionary.TryGetValue("two", value)) {
        std::cout << "Value for 'two': " << value << std::endl;
    }

    dictionary["three"] = 3;
    std::cout << "Count: " << dictionary.Count() << std::endl;

    return 0;
}
