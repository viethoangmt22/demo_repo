#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int c;
    c = a;
    a = b;
    b = c;
    std::cout << a;
    return 0;
}