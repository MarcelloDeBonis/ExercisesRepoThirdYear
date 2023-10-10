#include <iostream>
#include <vector>

using namespace std;

#define OPERATION(Type, Name, Symbol)\
Type Name(Type a, Type b) { return a Symbol b; }

#define SUM(Type, Symbol)\
OPERATION(Type, Sum, +)

#define SUBTRACT(Type, Symbol)\
OPERATION(Type, Subtract, -)

#define MULTIPLY(Type, Symbol)\
OPERATION(Type, Multiply, *)

#define DIVIDE(Type, Symbol)\
OPERATION(Type, Divide, /)

#define OPERATIONS(Type)\
SUM(Type)\
SUBTRACT(Type)\
MULTIPLY(Type)\
DIVIDE(Type)

OPERATIONS(int)
OPERATIONS(float)
OPERATIONS(double)

#define TYPE double
#define OPERATION_INDEX 3
#include <iostream>

#define DEFINE_VECTOR_CLASS(Type)                          \
class Vector_##Type {                                      \
public:                                                    \
Vector_##Type(int size) : size_(size) {					   \
data_ = new Type[size_];                                   \
}                                                          \
														   \
~Vector_##Type() {                                         \
delete[] data_;                                            \
}                                                          \
														   \
Type& operator[](int index) {                              \
if (index < 0 || index >= size_) {                         \
throw std::out_of_range("Index out of range");             \
}                                                          \
return data_[index];                                       \
}                                                          \
														   \
int size() const {                                         \
return size_;                                              \
}                                                          \
														   \
private:                                                   \
Type* data_;                                               \
int size_;                                                 \
};

DEFINE_VECTOR_CLASS(int);
DEFINE_VECTOR_CLASS(float);
DEFINE_VECTOR_CLASS(double);

int main() {
    
	Vector_int intVector(5);
    
	for (int i = 0; i < intVector.size(); ++i) {
		intVector[i] = i * 10;
	}
    
	for (int i = 0; i < intVector.size(); ++i) {
		std::cout << intVector[i] << " ";
	}
	std::cout << std::endl;
	

	
	TYPE a = 4, b = 2;

#if OPERATION_INDEX == 0
	cout << Sum(a, b) << endl;
#elif OPERATION_INDEX == 1
	cout << Subtract(a, b) << endl;
#elif OPERATION_INDEX == 2
	cout << Multiply(a, b) << endl;
#elif OPERATION_INDEX == 3
	cout << Divide(a, b) << endl;
#endif 

}