#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

/* Function to check leap year */
int isLeap(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

/* Function to return next date after adding n days */
struct date nextdate(struct date d, int n) {
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    while (n > 0) {
        if (d.month == 2 && isLeap(d.year))
            daysInMonth[1] = 29;
        else
            daysInMonth[1] = 28;

        d.day++;

        if (d.day > daysInMonth[d.month - 1]) {
            d.day = 1;
            d.month++;

            if (d.month > 12) {
                d.month = 1;
                d.year++;
            }
        }
        n--;
    }
    return d;
}

int main() {
    struct date d1, d2;
    int n;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter number of days to add: ");
    scanf("%d", &n);

    d2 = nextdate(d1, n);

    printf("Next date is: %02d-%02d-%d\n", d2.day, d2.month, d2.year);

    return 0;
}
