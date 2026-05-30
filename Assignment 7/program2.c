// Input : 10
//Output : 700

// Input : 3
//Output : 270

#include<stdio.h>

int DollarToINR(int iNo)
{
    return iNo * 70;        // iDollar = 0;
                            // iDollar = iNo * 70;
                            // return iDollar;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}