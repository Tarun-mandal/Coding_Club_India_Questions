#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int array[size],target;
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);

    scanf("%d",&target);
    int index=-1;
    for(int i=0;i<size;i++) {
        if (array[i] == target) {
            index = i;
            printf("%d", index);
            break;
        }
    }
    if(index == -1)
        printf("%d",-1);
}






