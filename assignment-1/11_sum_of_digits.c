#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("The total sum is : %d", sum);
    return 0;
}
