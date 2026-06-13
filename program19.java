class Logic
{
    void LargestDigit(int iNo)
    {
        int iDigit = 0;
        int iMax = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Large digit is : "+iMax);
    }
}

class program19
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.LargestDigit(83429);
    }
}