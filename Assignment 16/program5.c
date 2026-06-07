#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iTemp = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iTemp = Arr[iCnt];
        int iSum = 0;

        while(iTemp > 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        printf("Sum of digits of %d is : %d\n",Arr[iCnt], iSum);     
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    DigitsSum(Brr, iLength);

    free(Brr);

    return 0;
}