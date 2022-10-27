#include <stdio.h>

int main()
{

  int tCase, n;
  scanf("%d", &tCase);
  
  int  sum = 0; 
  for (int i = 0; i < tCase; i++)
  { scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
      int digits;
      scanf("%d", &digits);

      if (digits < 0)
      {
        sum = sum+0;
      }
      else
      {
        sum += digits;
      }
     
    }
     printf("Case %d: %d\n",i+1, sum);
     sum = 0;
  }
}