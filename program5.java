class Logic
{
    void PrintTable(int iNo)
    {
        int iCnt = 0, iTable = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iTable);
        }
    }
}

class program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.PrintTable(5);
    }
}