#include <iostream>

#define CALL(func)      \
    {                   \
        func(carriage); \
    }
void filling(int car[])
{
    std::cout << "Write down how many people are in the " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Carriage #" << i+1 << ": ";
        std::cin >> car[i];
    }
}
void empty_seats(int car[])
{
    std::cout << "List of carriages with free seats: ";
    for (int i = 0; i < 10; i++)
    {
        if (car[i] < 20)
            std::cout << i + 1 << " ";
    }
    std::cout << std::endl;
}
void overflow(int car[])
{
    std::cout << "List of overfilled carriages: ";
    for (int i = 0; i < 10; i++)
    {
        if (car[i] > 20)
            std::cout << i + 1 << " ";
    }
    std::cout << std::endl;
}
void total_passengers(int car[])
{
    std::cout << "Total passengers: ";
    int sum(0);
    for (int i = 0; i < 10; i++)
    {
        sum += car[i];
    }
    std::cout << sum << std::endl;
}
int main()
{
    int carriage[10];
    CALL(filling);
    CALL(overflow);
    CALL(empty_seats);
    CALL(total_passengers);
}

// int main()
// {
//     CALL(print);
//     return 0;
// }
