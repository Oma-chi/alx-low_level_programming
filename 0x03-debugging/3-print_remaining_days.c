#include "main.h"

/**
 * print_remaining_days - take a date and print how many days
 * are left in a year
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		if (month >= 3 && month >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", dsy);
		printf("Remaining days: %d\n", 366 - days);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid days: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day if the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

