#include <iostream>

#define DAY_1 "MONDEY"
#define DAY_2 "TUESDAY"
#define DAY_3 "WEDNESDAY"
#define DAY_4 "THURSDAY"
#define DAY_5 "FRIDAY"
#define DAY_6 "SATURDAY"
#define DAY_7 "SUNDAY"

int main()
{
    int number(1);
    while (number > 0 && number < 8)
    {
        std::cin >> number;
        switch (number)
        {
        case 1:
            std::cout << DAY_1 << std::endl;
            break;
        case 2:
            std::cout << DAY_2 << std::endl;
            break;
        case 3:
            std::cout << DAY_3 << std::endl;
            break;
        case 4:
            std::cout << DAY_4 << std::endl;
            break;
        case 5:
            std::cout << DAY_5 << std::endl;
            break;
        case 6:
            std::cout << DAY_6 << std::endl;
            break;
        case 7:
            std::cout << DAY_7 << std::endl;
            break;

        default:
            break;
        }
    }
}