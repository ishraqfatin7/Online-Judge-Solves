#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    int arr[3];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if (a + b + c >= 2)
        {
            count++;
        }
    }
    printf("%d",count);
}