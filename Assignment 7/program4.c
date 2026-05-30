// Input : 5
//output : 15    (5 * 3 * 1)

// Input : 10
//output : 945    (9 * 7 * 5 * 3 * 1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOdd = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOdd = iOdd * iCnt;
        }
    }

    return iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial number is %d",iRet);

    return 0;
}