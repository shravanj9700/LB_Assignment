class Logic
{
    void SmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iMin = iNo % 10;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            iNo = iNo / 10;
        }    
        System.out.println("Small digit is : "+iMin);        
    }
}

class program20
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.SmallestDigit(45872);
    }
}