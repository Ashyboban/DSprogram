#include<stdio.h>
struct distance
{
    int feet;
    float inch;
}d1,d2,result;
void main()
{
    printf("enter the first distance in inches");
    scanf("%f",&d1.inch);
    printf("enter the first distance in feet");
    scanf("%d",&d1.feet);
    printf("enter the sec distance in inches");
    scanf("%f",&d2.inch);
    printf("enter the sec distance in feet");
    scanf("%d",&d2.feet);
    printf("adding distances in inches");
    result.inch=d1.inch+d2.inch;
    result.feet=d1.feet+d2.feet;
    while (result.inch>=12)
    {
        result.inch-=result.inch-12;

        
        ++result.feet;
    }
    printf("\nsum of distances in inches and feet is \n%f,%d",result.inch,result.feet);
    


}
