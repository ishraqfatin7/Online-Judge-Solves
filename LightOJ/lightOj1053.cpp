#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, c, tCase;
    double angleOfC, angleOfB, angleOfA;
    scanf("%d", &tCase);
    for (int i = 0; i < tCase; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        // double cosC = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
        // double cosA = (-pow(a, 2) + pow(b, 2) + pow(c, 2)) / (2 * c * b);
        // double cosB = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c);
        // double pi= acos(-1);
        // double rad = pi/180; 

        if (a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a)
        {
            printf("Case %d: yes",i+1);
        }
        else
            printf("Case %d: no",i+1);
        
    }
}