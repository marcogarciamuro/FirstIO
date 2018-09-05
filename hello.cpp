// Author: Marco Garcia Muro
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout <<
           "What's your first name?" << std::endl;
    std::cin >> input;
    std::cout << "Hi, my name is Marco. What's yours?, " << input << std::endl;
    return 0;
}
