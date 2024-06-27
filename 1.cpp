// 1.cpp
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "The sum is: " << add(a, b) << std::endl;
    return 0;
}
