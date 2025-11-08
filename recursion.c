#include<stdio.h>
// je function nijei nijeke call kore take recursive function bole ar ei puru process ta ke recursion bole.
void hello()
{
    printf("hello\n");
    hello();
}
int main()
{
    printf("hi\n");
    hello();
    return 0;
}