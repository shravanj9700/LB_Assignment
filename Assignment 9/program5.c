// Input : 2395
//Output : -15  (2 - 17)

// Input : 1018
//Output : 6    (8 - 2)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 1;
    int iOdd = 1;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}