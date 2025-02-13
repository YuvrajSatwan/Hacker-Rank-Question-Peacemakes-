#include <stdio.h>

int main() {
int n,a,b,c;
    scanf("%d",&n);
    
    if(n<=0)
    {
        printf("The verdict for the number %d is: INVALID",n);
        return 0;
    }

    a=n%2==0 && n>10;
    b=n>15 && n%3==0;
    c=n%7==0;
    if(a&&b&&c)
    {
         printf("The verdict for the number %d is: SUPERNATURAL",n);
    }
    else if((a&&b) || (a&&c) || (b&&c) )
    {
         printf("The verdict for the number %d is: MIRACULOUS",n);
    }
    else if (a || b || c)
    {
         printf("The verdict for the number %d is: MAGICAL",n);
    }
    else if(!a && !b && !c)
    {
         printf("The verdict for the number %d is: NORMAL",n);
    }
}