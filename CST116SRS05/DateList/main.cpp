// main.cpp 
// Date list program that accepts two dates and outputs each date between the two.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	// first date variables
	int year1{ 0 };
	int month1{ 0 };
	int day1{ 0 };
	// second date variables
	int year2{ 0 };
	int month2{ 0 };
	int day2{ 0 };
	// other variables
	int m_max{ 12 };
	int d_max{ 0 };
	bool leapyear{ false };
	// console input
	std::cin >> year1;
	std::cin.ignore();
	std::cin >> month1;
	std::cin.ignore();
	std::cin >> day1;
	std::cin.ignore();
	std::cin >> year2;
	std::cin.ignore();
	std::cin >> month2;
	std::cin.ignore();
	std::cin >> day2;

	if (year1 >= 1901 && year1 <= 2099 && year2 >= 1901 && year2 <= 2099 )
	{
		for (int y = year1; y <= year2; y++)
		{
			if (y % 4 == 0)
			{
				leapyear = true;
			}
			if (y % 4 == 1)
			{
				leapyear = false;
			}
			if (y == year2)
			{
				m_max = month2;
			}
			for (int m = month1; m <= m_max; m++)
			{
				switch (m)
				{
				case 1:
					d_max = 31;
					break;
				case 2:
					if (leapyear)
					{
						d_max = 29;
					}
					else
						d_max = 28;
					break;
				case 3:
					d_max = 31;
					break;
				case 4:
					d_max = 30;
					break;
				case 5:
					d_max = 31;
					break;
				case 6:
					d_max = 30;
					break;
				case 7:
					d_max = 31;
					break;
				case 8:
					d_max = 31;
					break;
				case 9:
					d_max = 30;
					break;
				case 10:
					d_max = 31;
					break;
				case 11:
					d_max = 30;
					break;
				case 12:
					d_max = 31;
					break;
				default:
					break;
				}

				if (y == year2 && m == month2)
				{
					d_max = day2 - 1;
				}

				for (int d = day1; d <= d_max; d++)
				{
					std::cout << year1 << "-" << std::setw(2) << std::setfill('0') << month1 << "-" << std::setw(2) << std::setfill('0') << day1 << "  ";
					std::cout << y << "-" << std::setw(2) << std::setfill('0') << m << "-" << std::setw(2) << std::setfill('0')  << d << "  ";
					std::cout << year2 << "-" << std::setw(2) << std::setfill('0') << month2 << "-" << std::setw(2) << std::setfill('0') << day2 << std::endl;
					if (d == 31)
					{
						day1 = 1;
					}
				}
				if (m == 12)
				{
					month1 = 1;
				}
			}
		}
	}
    return 0;
}

