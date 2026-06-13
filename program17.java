class Logic
{
    void PrintReverse(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class program17
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.PrintReverse(10);
    }
}