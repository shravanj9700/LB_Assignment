class Logic
{
    void SumEvenOdd(int iNo)
    {
        int iDigit = 0;
        int iSumEven = 0, iSumOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
        
            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Addition of sum digits are : "+iSumEven);
        System.out.println("Addition of sum digits are : "+iSumOdd);
    }
}

class  program9
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.SumEvenOdd(123456);
    }
}