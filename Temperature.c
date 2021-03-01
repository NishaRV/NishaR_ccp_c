#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter the temperature in f:\n");
    scanf("%f",&f);
    c=(5.0/9)*(f-32);
    printf("The temperature in c is: %f \n",c);
    return 0;
}
