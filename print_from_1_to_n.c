#include<stdio.h>
void hello(int i)
{
    printf("%d\n",i);
    hello(i+1);
}
int main()
{
    int i =1;
    hello(i);
    return 0;
}
