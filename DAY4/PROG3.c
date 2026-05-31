#include<stdio.h>
#include<math.h>
int main()
{
    int num,a,i,j,d=0,s=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10)
    {s=s+1;}
    for(j=num;j>0;j=j/10)
    {a=j%10;
    d=d+round(pow(a,s));}
    if(d==num)
    {printf("%d is an armstrong number.",num);}
    else
    {printf("%d is not an armstrong number.",num);}
    return 0;
}