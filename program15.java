class Logic
{
    void CalculatePower(int iNo1, int iNo2)
    {
        int iCnt = 0;
        int iResult = 1;

        for(iCnt = 1; iCnt <= iNo2; iCnt++)
        {
            iResult = iResult * iNo1;
        }
        System.out.println("Power of number is : "+iResult);
    }
}

class program15
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CalculatePower(2, 5);
    }
}