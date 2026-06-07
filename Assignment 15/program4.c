#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iSize, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }

    printf("\n");
}

int main()
{
    int iLength = 0, iValue1= 0, iValue2 = 0, iCnt = 0;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Range(Brr, iLength, iValue1, iValue2);

    free(Brr);

    return 0;
}

//////////////////////////////
//
//  Enter number of elements :
//  6
//  Enter starting point :
//  60
//  Enter ending point : 
//  90
//  Enter elements :
//  85
//  66
//   3
//  76
//  93
//  88
//
//  Output : 85 66  76  88
/////////////////////////////////