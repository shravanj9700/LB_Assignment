// Input : a        Output : A
// Input : D        Output : d

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\t",toupper(cValue));
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\t",tolower(cValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}