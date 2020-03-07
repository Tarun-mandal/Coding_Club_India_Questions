#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
   for(int i=0;i<n-1;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<n-1;i++)
   {
       if(arr[i]>arr[i+1]) {
           printf("%d", arr[i]);
           break;
       }
   }
}

/*
  8-->Array size
1
2
3
4
5
6--->Peak value 
4
 
 
6-->output of peak value
  */

