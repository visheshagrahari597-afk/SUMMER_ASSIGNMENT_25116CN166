#include<stdio.h>
int main()
{
    int d,a,i,rev=0;
    printf("Enter number: ");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {d=i%10;
    rev=(rev*10)+d;}
    if(rev==a)
    {printf("%d is a palindrome number.",a);}
    else
    {{printf("%d is a not palindrome number.",a);}}
    return 0;
}