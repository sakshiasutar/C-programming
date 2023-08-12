#include <stdio.h>
void main()
{
    int n,rem=0,ans=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int Original_no=n;
    while(n>0)
    {
        rem=n%10;
        ans=(ans*10)+rem;
        n=n/10;
    }
    printf("%d",ans);
    if(Original_no==ans)
    {
        printf("\nThe no is Palindrome number");
    }
    else
    {
        printf("\nThe no. is not a Palindrome number");
    }
}
