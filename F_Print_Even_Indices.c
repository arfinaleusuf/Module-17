#include<stdio.h>
void printing(int a[], int n, int i)
{
    if(i >= n)
    {
        return;
    }
    printing(a,n,i+2);
    printf("%d ",a[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i= 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printing(a,n,0);
    return 0;
}