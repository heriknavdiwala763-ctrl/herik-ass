#include<stdio.h>
void addvectors(int v1[], int v2[], int sum[],int n);
int main()
{
    int i,n;
    int v1[50],v2[50],sum[50];
    printf("enter number of elements :: ");
    scanf("%d",&n);
    printf("Enter elements of first vector:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &1[i]);
    }
    printf("Enter elements of second vector:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }
    addvectors(v1, v2, sum,n);
    printf("adding of two vectors:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    return 0;
}
void addvectors(int v1[],int v2[],int sum[],int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            sum[i]=v1[i]+v2[i];
        }
}
