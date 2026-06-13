class Logic
{
    void CheckSign(int iNo)
    {
        if(iNo > 0)
        {
            System.out.println("It is positive");
        }
        else if(iNo < 0)
        {
            System.out.println("It is negative");
        }
        else
        {
            System.out.println("It is zero");
        }
    }
}

class program10
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckSign(-8);
    }
}