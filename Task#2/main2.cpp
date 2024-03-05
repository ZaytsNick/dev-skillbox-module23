// SPRING, SUMMER, AUTUMN или WINTER
#include <iostream>
#define WINTER "Hello winter world"
// int main()
// {
//     std::cout << "Hello world"  << std::endl;
// }
#if defined(SPRING)
int main()
{
    std::cout << #SEASON << std::endl;
}
#endif
#if defined(SUMMER)
int main()
{
    std::cout << #SEASON << std::endl;
}
#endif
#if defined(AUTUMN)
int main()
{
    std::cout << #SEASON << std::endl;
}
#endif
#if defined(WINTER)
int main()
{
    std::cout << WINTER<< std::endl;
}
#endif