#include <iostream>
#include <iomanip>
#include <limits>
#include <typeinfo>

template <typename T>
void limPrint(T x) {
    std::cout << typeid(T).name() << std::endl;
    std::cout << std::numeric_limits<T>::max() << std::endl;
    std::cout << std::numeric_limits<T>::min() << std::endl;
    std::cout << std::numeric_limits<T>::lowest() << std::endl;

}

int main() {
    int x{7};
    float z{3.14};
    limPrint(x);
    limPrint(z);
    
    int f = std::numeric_limits<int>::max();
    std::cout << f + 1 << std::endl;
    return 0;
}