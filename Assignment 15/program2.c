#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
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

    printf("Enter the elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = FirstOcc(Brr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurence of number is %d\n",iRet);
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
//  85  66  3   80  93  88 
//  First occurence of number is
//
//  Enter the number that you want to : 
//  12
//  85  66  14   80  93  88 
//  There is no such number
//
////////////////////////////////////////