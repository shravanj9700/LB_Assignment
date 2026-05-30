// Input : 5.3
//Output : 88.2026

// Input : 10.4
//Output : 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 0.0f;

    fArea = 3.14 * fRadius * fRadius;
    
    return fArea;

}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f",dRet);

    return 0;
}