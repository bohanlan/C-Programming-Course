#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i = 0, sum = 0;
    do
    {
        printf("請輸入n值(n>0): ");
        sscanf("%d", &n);
    } while (n <= 0);
    do
        fact *= i++;
    while (i <= n);
    printf("%d! = %d\n", n, fact);

    system("pause");
    return 0;
}
