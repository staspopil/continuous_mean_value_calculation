#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter Value, or x to stop!\n";

    float counter = 0, sum = 0;
    std::string number;
    std::cin >> number;

    while (number != "x")
    {
        counter++;  
        sum += std::stof(number);
        std::cout << "mean value: " << sum / counter << "\n";
        std::cin >> number;
    }
    std::cout << "Bye Bye !";
}
