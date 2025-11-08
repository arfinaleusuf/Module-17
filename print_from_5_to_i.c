#include <stdio.h>
void hello(int i)
{
    if (i == 0) // end condition
    {
        return;
    }
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
    hello(i - 1); // incriment and decriment
}
int main()
{
    int i = 5;
    hello(i); // initialization/starting
    return 0;
}
