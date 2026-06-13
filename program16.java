class Logic
{
    void SumEvenNumbers(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println(iSum);
    }
}

class program16
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.SumEvenNumbers(10);
    }
}