#include <iostream>
using namespace std;
int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int i, N, len, j;
   N=2;
   len=5;
   int temp=0;
   for (i = 0; i < N; i++) {
      int x = arr[0];
      for (j = 0; j < len; j++) {
         temp=arr[j];
         arr[j] = arr[j + 1];
         arr[j+1]=temp;
      }
      arr[len - 1] = x;
   }
   for (i = 0; i < len; i++) {
      cout<< arr[i]<<"\t";
   }
}