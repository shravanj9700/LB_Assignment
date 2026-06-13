class Logic
{
    void CheckPalindrome(int iNo)
    {
        int iDigit = 0;
        int iRev = 0, iTemp = 0;

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
           
            iRev = (iRev * 10) + iDigit;

            iNo = iNo / 10;
        }

        if(iTemp == iRev)
        {
            System.out.println("Number is pallindrome");
        }
        else
        {
            System.out.println("Number is not pallindrome");
        }
    }
}

class program2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        
        lobj.CheckPalindrome(121);
    }
}