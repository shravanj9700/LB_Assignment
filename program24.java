class Logic
{
    void CountFactors(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }
        System.out.println(iCount);
    }
}

class program24
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CountFactors(20);
    }
}