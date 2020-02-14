#include <iostream>

int main()
{
    std::cout << "Hello world!\n";
    std::cout << "I am making a c++ program!" << std::endl;
    std::cout << "Enter a number: ";
    int x{ };
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';
    return 0;
}


