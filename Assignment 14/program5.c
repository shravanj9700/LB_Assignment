#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0, iValue = 0, iCnt = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the number that you want : \n");
    scanf("%d",&iValue);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n",iLength);

    for(iCnt= 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Frequency(Brr,iLength, iValue);

    printf("Frequency of number is : %d\n",iRet);

    free(Brr);

    return 0;
}

/////////////////////////////////////
//
// Enter number of elements : 
// 6
// Enter the number that you want :
// 66
// Enter the elements : 
// 85
// 66
// 3
// 66
// 93
// 88
// Frequency of number is : 2
//
/////////////////////////////////////