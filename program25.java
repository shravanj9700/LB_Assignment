class Logic
{
    void PrintDivisible(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2 == 0) && (iCnt % 3 == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program25
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.PrintDivisible(30);
    }
}