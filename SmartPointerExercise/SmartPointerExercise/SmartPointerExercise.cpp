
#include <iostream>

class unique_void_ptr {
private:
    void* ptr;

public:
   
    unique_void_ptr() : ptr(nullptr) {}
    
    explicit unique_void_ptr(void* p) : ptr(p) {}
    
    ~unique_void_ptr() {
        if (ptr) {
            delete reinterpret_cast<char*>(ptr);
        }
    }
    
    unique_void_ptr(unique_void_ptr&& other) : ptr(other.ptr) {
        other.ptr = nullptr;
    }
    
    unique_void_ptr& operator=(unique_void_ptr&& other) {
        if (&other != this) {
            if (ptr) {
                delete ptr;
            }
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }
    
    unique_void_ptr(const unique_void_ptr&) = delete;
    unique_void_ptr& operator=(const unique_void_ptr&) = delete;

    // Accessor
    void* get() const {
        return ptr;
    }
    
    void* release() {
        void* tmp = ptr;
        ptr = nullptr;
        return tmp;
    }
    
    void reset(void* p = nullptr) {
        if (ptr) {
            delete ptr;
        }
        ptr = p;
    }
};

int main() {
    // Test
    int* int_ptr = new int(42);
    unique_void_ptr u_ptr(int_ptr);
    std::cout << "Value: " << *(reinterpret_cast<int*>(u_ptr.get())) << std::endl;
    
    void* raw_ptr = u_ptr.release();
    std::cout << "Released Value: " << *(reinterpret_cast<int*>(raw_ptr)) << std::endl;

    delete reinterpret_cast<int*>(raw_ptr);
    return 0;
}
