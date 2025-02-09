#include <stdio.h>
int main(){
float x,a,b,c,d,e,f,g;
    
    scanf("%f",&x);
    if(x<=250000 && x>=0)
    {
        printf("0.00");
    }
    else if (250000<=x && x<=500000)
    {
        a=x-250000;
        b=a*0.05;
     
        printf("%.2f",b);
    }
    else if(x>500000 && x<=1000000)
    {
        a=x-250000;
        b=a-250000;
        c=b*0.2;
        d=12500+c;
            printf("%.2f",d);
    }
    else if(x>1000000)
    {
        a=x-250000;
        b=a-250000;
        c=250000*0.05;
        d=b-500000;
        e=500000*0.2;
        f=d*0.3;
        
        g=c+e+f;
        printf("%.2f",g);
    }
    else{
        printf("INVALID");
    }
    
    return 0;
}

