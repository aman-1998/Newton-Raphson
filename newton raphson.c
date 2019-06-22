#include<stdio.h>
#include<math.h>
float f(float x);
float fd(float x);
int main()
{
    float a,b,c,x0,x=0,h,d;
    int i;
    printf("Enter up to which decimal place is required: ");
    scanf("%f",&d);
    for(i=0;i<=100;i++)
    {
        if(f((float)i)*f((float)(i+1))<0)
        {
            a=i;
            b=i+1;
            break;
        }
    }
    x0=(a+b)/2;
    do
    {
        h=x;
        c=f(x0)/fd(x0);
        x=x0-c;
        x0=x;
    }
    while((int)(h*pow(10,d))-(int)(x*pow(10,d))!=0);
    printf("Root = %f",x);
    return 0;
}
float f(float x)
{
    float y;
    y=x*x*x-3*x+1;
    return y;
}
float fd(float x)
{
    float y;
    y=3*x*x-3;
    return y;
}
