#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize - 1; iCnt >= 0;  iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1;
}

int main()
{
    int iLength = 0, iValue = 0, iCnt = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter number that you want\n");
    scanf("%d",&iValue);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements : ",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = LastOcc(Brr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrance of number is : %d\n",iRet);
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
//  85  66  3   66  93  88 
//  First occurence of number is
//
//  Enter the number that you want to : 
//  93
//  85  66  14   66  93  88 
//  There is no such number
//
////////////////////////////////////////