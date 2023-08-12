#include <stdio.h>
void main()
{
    int n,rem=0,ans=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        ans=ans*rem;
        n=n/10;
    }
    printf("Multiplication of each digit from a number:%d",ans);
    
}
