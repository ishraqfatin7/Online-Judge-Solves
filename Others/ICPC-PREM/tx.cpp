#include <iostream>
#include <string>
#include <sstream>
#include <chrono>

int main()
{
    std::string date1, date2;
    std::cout << "Enter first date (dd/mm/yyyy#hh:mm:ss): ";
    std::cin >> date1;
    std::cout << "Enter second date (dd/mm/yyyy#hh:mm:ss): ";
    std::cin >> date2;

    std::istringstream ss1(date1);
    std::tm tm1 = {};
    ss1 >> std::get_time(&tm1, "%d/%m/%Y#%H:%M:%S");

    std::istringstream ss2(date2);
    std::tm tm2 = {};
    ss2 >> std::get_time(&tm2, "%d/%m/%Y#%H:%M:%S");

    std::chrono::system_clock::time_point tp1 = std::chrono::system_clock::from_time_t(std::mktime(&tm1));
    std::chrono::system_clock::time_point tp2 = std::chrono::system_clock::from_time_t(std::mktime(&tm2));

    if (tp1 < tp2)
    {
        std::cout << date1 << " is older than " << date2 << std::endl;
    }
    else if (tp1 > tp2)
    {
        std::cout << date2 << " is older than " << date1 << std::endl;
    }
    else
    {
        std::cout << "Both dates are the same." << std::endl;
    }

    return 0;
}
