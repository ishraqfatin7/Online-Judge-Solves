#include<stdio.h>
#include<math.h>
int main()
{
    double pi = acos(-1);
    double radius,areaCircle,areaRectangle,freeArea; 
    int tCase;
    scanf("%d", &tCase);

    for (int i = 0; i < tCase; i++)
    {
        scanf("%lf",&radius);
        areaCircle =  radius*radius *pi;
        areaRectangle = radius*radius*4;
        freeArea = areaRectangle -areaCircle;
        printf("Case %d: %lf\n",i+1,freeArea);
    }
    
    
}