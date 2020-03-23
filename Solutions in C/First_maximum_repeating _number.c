#include<stdio.h>
#include <limits.h>
int main()
{
    int size;
    scanf("%d",&size);
    int array[size];
    int maxinteger=INT_MIN;
    for(int i=0;i<size;i++)
    {
        scanf("%d ",&array[i]);
        if(array[i]>maxinteger)
            maxinteger=array[i];
    }
    int secarray[maxinteger+1];
    for(int i=0;i<=maxinteger;i++)
    {
        secarray[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        secarray[array[i]]++;
    }
    int maxvalue=-1;
    int maxint=INT_MIN;
    for(int i=0;i<=maxinteger;i++)
    {
        if(secarray[i] > maxvalue) {
            maxint = i;
            maxvalue=secarray[i];
        }
    }
    printf("%d\n",maxint);
}
