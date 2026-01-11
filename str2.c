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
    printf("enter hour:: ");
    scanf("%d",&s.hour);
    printf("enter minute:: ");
    scanf("%d",&s.minute);
    printf("enter second:: ");
    scanf("%d",&s.second);
    printf("time is %d:%d:%d",s.hour,s.minute,s.second);
    return 0;
}