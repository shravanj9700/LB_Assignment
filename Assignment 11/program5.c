// Input : 23   35
//Output : 35   34  33  32  31  30  29  28  27  26  25  24  23

// Input : 10   18
//Output : 18   17  16  15  14  13  12  11  10

// Input : 90   18
//Output : Invalid range

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}