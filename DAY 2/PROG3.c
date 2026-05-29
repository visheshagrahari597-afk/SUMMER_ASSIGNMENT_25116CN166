#include<stdio.h>
int main()
{
    int d,a,i,pro=1;
    printf("Enter number: ");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {d=i%10;
    pro=pro*d;}
    printf("The product of digits is %d.",pro);
    return 0;
}