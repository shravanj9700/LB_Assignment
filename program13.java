class Logic
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 5 == 0) && (iNo % 11 == 0))
        {
            System.out.println("It is divisible by 5 and 11");
        }
        else
        {
            System.out.println("It is not divisible by 5 and 11");
        }
    }
}

class program13
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckDivisible(55);
    }
}