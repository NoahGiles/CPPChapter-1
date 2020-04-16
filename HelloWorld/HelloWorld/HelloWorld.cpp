#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello world\n";
    std::string name;
    std::cout << "What is your name? ";
    getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";

    std::cout << "CHAIR : \n\n\n";
    std::cout << "x\nx\nx\nx\nx\nx\nxxxxxxxxx\nx       x\nx       x\nx       x\nx       x\nx       x\n";
    std::cout << "ANOTHER CHAIR : \n\n\n";
    std::cout << "        x\n        x\n        x\n        x\n        x\n        x\nxxxxxxxxx\nx       x\nx       x\nx       x\nx       x\nx       x\n";
}
