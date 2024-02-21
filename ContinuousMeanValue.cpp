#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter Value, or x to stop!\n";

    float counter = 0, result = 0;
    std::string number;
    std::cin >> number;

    while (number != "x")
    {
        counter++;
        result = (result * (counter - 1) + (std::stof(number))) / counter;
        std::cout << "mean value: " << result << "\n";
        std::cin >> number;
    }
    std::cout << "Bye Bye !";
}
