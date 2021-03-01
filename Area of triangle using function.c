#include <stdio.h>
#include <math.h>

  float areaofatriangle(float,float,float);

 int main()
{
    float a,b,c,Area;
    printf("\n enter the three sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);

    Area=areaofatriangle(a,b,c);
    printf("\n Areaoftriangle=%.2f\n",Area);
    return 0;
}
 float areaofatriangle (float a,float b,float c)
{
  float s,Area;
  s=(a+b+c)/2;
  Area=sqrt(s*(s-a)*(s-b)*(s-c));
  return Area;
}
