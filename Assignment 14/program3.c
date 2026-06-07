#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *Brr = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet = Check(Brr, iLength);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(Brr);

    return 0;
}

////////////////////////////////////////
//
//  Enter number of elements :
//  6
//  Enter Elements : 
//  85  66  11   80  93  88 
//  11 is present
//
//  85  66  14   80  93  88 
//  11 is not present
//
////////////////////////////////////////