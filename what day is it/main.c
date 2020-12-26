/*According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1st January of
this year.  */
#include<stdio.h>
#include<conio.h>
int main()
{
    //basic year is chosen as the least year which user can enter through the keyboard where it should be Monday on 01th of January
    int year, basic_year=1900, leap_year, remaining_year, total_days, day,total_years = 0;

    printf("Enter the year: ");
    scanf("%d", &year);

    total_years = (year)-basic_year; //we are calculating the total years between basic year and input year

    //Now calculate the leap years
    leap_year =((year/4) - (year/100) + (year/400))-((basic_year/4) - (basic_year/100) + (basic_year/400));

    //calculate the year which are not leap years
    remaining_year = total_years - leap_year;

    //calculate total days present in all years
    //remaining years are not leap year so total days in single year will be 365
    //But in leap year we have 366 days in a single year
    total_days = (remaining_year*365) + (leap_year*366);

    //Find the actual day
    day = total_days%7;

    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;
}
