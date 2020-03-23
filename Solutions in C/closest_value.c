#include <stdio.h>
#include <math.h>
int main() {
    int n, num;
    scanf("%d", &n);
    scanf("%d", &num);
    int arr[n];
    int index=-1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(num==arr[i])
            index=i;
    }
    int mindiff=0;int diff;
    if(index>-1)
        printf("%d",arr[index]);
    else {
        for (int i = 0; i < n; i++) {
            diff = (int) fabs(num - arr[i]);
            if (i == 0) {
                mindiff = diff;
                index = i;
            } else if (mindiff > diff) {
                mindiff = diff;
                index = i;
            }
        }
    }
    printf("%d",arr[index]);
}

/* Sample input
7--->array size
5,11,4--->Number to be searched
2
5
6
7
8
8
9
5-->output of the nearest number
9-->output of the nearest number
5-->output of the nearest number
