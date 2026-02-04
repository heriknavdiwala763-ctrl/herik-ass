#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}
int update_date(struct date *d)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (d->month == 2 && leap_year(d->year))
    {
        days_in_month[2] = 29;
    }

    d->day++;

    if (d->day > days_in_month[d->month])
    {
        d->day = 1;
        d->month++;

        if (d->month > 12)
        {
            d->month = 1;
            d->year++;
        }
    }

    return 1;
}
int new_date(struct date *d, int days)
{
    int i;
    for (i = 0; i < days; i++)
    {
        update_date(d);
    }
    return 1;
}

void printDate(struct date d)
{
    char *month_names[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    printf("%s %d, %d\n", month_names[d.month], d.day, d.year);
}

int main()
{
    struct date d, updated_date;
    int days;

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    printf("Enter number of days to add: ");
    scanf("%d", &days);

    new_date(&d, days);
    printf("Next date is:\n");
    printDate(d);

    return 0;
}
