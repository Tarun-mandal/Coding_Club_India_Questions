#include<stdio.h>
void pow(float base,int exponent);
int main()
{
    float base;int exponent;
    scanf("%f %d",&base,&exponent);
    pow(base,exponent);

}
void pow(float base,int exponent)
{
    float answer=1.0;
    for(int i=1;i<=exponent;i++)
    {
        answer*=base;
    }
    if(base == 0)
        printf("%f",0.0);
    else
        printf("%f",answer);
}






