#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   int first=0;int last=0;int count=0;int flag=0;
   for(int i=0;i<n;i++)
{
       scanf("%d",&arr[i]);
       if(arr[i]<0 && flag==0) {
           first = i;
           flag = 1;
       }
       if(arr[i]<0) {
           count++;
           last = i;
       }
}
   if(count%2==0)
   {
       int product=1;
       for(int i=0;i<n;i++)
           product*=arr[i];

       printf("%d %d",0,n-1);
   } else
   {
       int product1=arr[0];
       for(int i=1;i<last;i++)
           product1*=arr[i];

       int product2=arr[first+1];
       for(int i=first+2;i<n;i++)
           product2*=arr[i];

       printf("%d %d\n",first,last);
       product1>=product2 ? printf("%d %d",0,last-1) : printf("%d %d",first+1,n-1);
   }
}
