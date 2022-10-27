#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

    int a,b,testCase;
    scanf("%d",&testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);

        int distance = abs(a - b) * 4;
        
        int distanceToGround = abs(b-0)*4;
        int timeOnFloor = distance + 15+distanceToGround;
        printf("Case %d: %d\n", i+1,timeOnFloor);
    }
    
}