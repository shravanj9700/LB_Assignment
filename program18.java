class Logic
{
    void CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            System.out.println("It is perfect number");
        }
        else
        {
            System.out.println("It is not perfect number");
        }
    }
}

class program18
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckPerfect(6);
    }
}