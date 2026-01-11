#include<stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
};
int main()
{
    struct time_struct s;
    s.hour=12;
    s.minute=30;
    s.second=45;
    printf("time is %d:%d:%d",s.hour,s.minute,s.second);
    return 0;
}