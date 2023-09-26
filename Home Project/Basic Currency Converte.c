#include<stdio.h>

float input_amount()
{
    float x;
    scanf("%f", &x);
    return x;
}

float convert_to_eur(float x)
{
    return x*0.85;
}
float convert_to_gbp(float x)
{
    return x*0.73;
}

int main()
{
    float x,y;
    int z;
    x=input_amount();

    printf("Enter the amount to be converted: %.2f\n", x);
    printf("Convert to: \n");
    printf("1. EUR \n");
    printf("2. GBP \n");
    printf("Enter your choice:\n");
    scanf("%d", &z);

    if(z==1)
    {
        y=convert_to_eur(x);
        printf("Conversion Result:\nAmount: $%.2f (USD) is equivalent to %.2f (EUR)\n",x,y);
    }
    else if(z==2)
    {
        y=convert_to_gbp(x);
        printf("Conversion Result:\nAmount: $%.2f (USD) is equivalent to %.2f (EUR)\n",x,y);
    }
    else
        printf("invalid");

}

