#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>

T add(T a, T b){
    return a + b;
}

int main(){
    std::cout << "Hello, This is MAnisurya" << std::endl;
    std::cout << "The sum is : " << add(2,3) << std::endl;

    return 0;
}