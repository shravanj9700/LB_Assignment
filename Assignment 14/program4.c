#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *Brr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Frequency(Brr, iLength);

    printf("Frequency of 11 number is : %d\n",iRet);

    free(Brr);

    return 0;
}

////////////////////////////////////////
//
//  Enter number of elements :
//  6
//  Enter Elements : 
//  85  66  3   15  93  88 
//  Frequency of 11 is : 0
//
//  85  11  84   11  93  111 
//  Frequency of 11 is : 2
//
////////////////////////////////////////