#include <stdio.h>
void main()
{
    int n,rem=0,ans=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        ans=ans+rem;
        n=n/10;
    }
    printf("The addition of each digit from number is:%d",ans);
}
