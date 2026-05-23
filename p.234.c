#include <stdio.h>

int rec_func(int n);

int main(void)
{
    int total_sum;
    total_sum = rec_func(10);
    printf("%d\n", total_sum);
    return 0;
}

int rec_func(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + rec_func(n - 1);
}