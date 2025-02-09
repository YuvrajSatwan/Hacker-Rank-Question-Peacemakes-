#include <stdio.h>

int main() {

    float n,a,b;
    scanf("%f",&n);
    if ( n>=0 && n<=100)
    {
        a=n*5;
        if (a<=1200)
    {
        b=a-a*0.1;
        printf("The electricity bill is: %.2f.",b);
        
    }
    else
    {
        printf("The electricity bill is: %.2f.",a);
    }
        
    }
    
    else if (n>100 && n<=300)
    {
        b=100;
        a=500+(n-100)*7;
        if (a<=1200)
    {
        b=a-a*0.1;
        printf("The electricity bill is: %.2f.",b);
        
    }
    else
    {
        printf("The electricity bill is: %.2f.",a);
    }
       
        
    }
    
    else if (n>300)
    {
        a=500+1400+(n-300)*10;
         if (a<=1200)
    {
        b=a-a*0.1;
        printf("The electricity bill is: %.2f.",b);
        
    }
    else
    {
        printf("The electricity bill is: %.2f.",a);
    }
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}