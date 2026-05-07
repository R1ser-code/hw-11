#include <iostream>

enum Month
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    int number;

    do
    {
        std::cout << "Enter month number: ";
        std::cin >> number;

        Month month = static_cast<Month>(number);

        switch (month)
        {
        case January:
            std::cout << "January\n";
            break;

        case February:
            std::cout << "February\n";
            break;

        case March:
            std::cout << "March\n";
            break;

        case April:
            std::cout << "April\n";
            break;

        case May:
            std::cout << "May\n";
            break;

        case June:
            std::cout << "June\n";
            break;

        case July:
            std::cout << "July\n";
            break;

        case August:
            std::cout << "August\n";
            break;

        case September:
            std::cout << "September\n";
            break;

        case October:
            std::cout << "October\n";
            break;

        case November:
            std::cout << "November\n";
            break;

        case December:
            std::cout << "December\n";
            break;

        default:
            if (number == 0)
            {
                std::cout << "Goodbye\n";
            }
            else
            {
                std::cout << "Wrong number!\n";
            }
        }

    } while (number != 0);

    return 0;
}