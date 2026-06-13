class Logic
{
    void CountEvenOddRange(int iNo)
    {
        int iCnt = 0;
        int iCountEven = 0;
        int iCountOdd = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;                
            }
            else if(iCnt % 2 != 0)
            {
               iCountOdd++;
            }            
        }
        System.out.println("Even number is : "+iCountEven);
        System.out.println("Odd number is : "+iCountOdd);
    }
}

class program22
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CountEvenOddRange(50);
    }
}