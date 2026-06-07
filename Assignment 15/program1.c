#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool Check(int Arr[], int iSize, int iNo)
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
    int iLength = 0, iValue = 0, iCnt = 0;
    int *Brr = NULL;
    bool bRet = FALSE;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the number that you want to : \n");
    scanf("%d",&iValue);

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

    bRet = Check(Brr, iLength, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(Brr);

    return 0; 
}

////////////////////////////////////////
//
//  Enter number of elements :
//  6
//  Enter the number that you want to : 
//  66
//  Enter Elements : 
//  85  66  11   80  93  88 
//  Number is present
//
//  Enter the number that you want to : 
//  12
//  85  66  14   80  93  88 
//  Number is not present
//
////////////////////////////////////////