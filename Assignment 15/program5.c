#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }

    return iMult;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Product(Brr, iLength);

    printf("Product of odd element is : %d\n",iRet);

    free(Brr);

    return 0;
}

//////////////////////////////
//
//  Enter number of elements :
//  6
//  Enter elements :
//  15 
//  66         
//   3
//  70
//  10
//  88
//
//  Product of odd element is : 45
/////////////////////////////////