#include <iostream>

#define DAY_0 "no such day"
#define DAY_1 "MONDAY"
#define DAY_2 "TUESDAY"
#define DAY_3 "WEDNESDAY"
#define DAY_4 "THURSDAY"
#define DAY_5 "FRIDAY"
#define DAY_6 "SATURDAY"
#define DAY_7 "SUNDAY"

// #define DAY_OF_THE_WEEK(type, a, day) ({ decltype(a) type tmp=a; DAY##_+tmp; })
// #define DAY_OF_THE_WEEK(a) std::cout<<DAY##_## a<<std::endl;
// #define MAX(a, b) ({int _a = (a), _b = (b); _a > _b ? _a : _b; })
//  #define DAY_OF_THE_WEEK(a) int _a=(a);std::cout<<DAY##_+_a;
#define WRITE(num) std::cout << DAY##_##num << std::endl;
int main()
{
    int number;
    while (number != 0)
    {
        std::cin >> number;
        switch (number)
        {
        case 1:
            WRITE(1);
            break;
        case 2:
            WRITE(2);
            break;
        case 3:
            WRITE(3);
            break;
        case 4:
            WRITE(4);
            break;
        case 5:
            WRITE(5);
            break;
        case 6:
            WRITE(6);
            break;
        case 7:
            WRITE(7);
            break;
        default:
            WRITE(0);
            break;
        }
    }
}