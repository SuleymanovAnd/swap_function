#include <iostream>

void swap (int &a, int &b){
int c = b;
b = a;
a = c;
}
int main() {
    int a = 10;
    int b = 20;
    std::cout << a << " - a " << b << " - b"<< std::endl;
    swap (a,b);
    std::cout << a << " - a " << b << " - b"<<std::endl;
}
