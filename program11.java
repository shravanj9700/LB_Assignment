class Logic
{
    void CheckLeapYear(int iNo)
    {
        if((iNo % 400 == 0) || ((iNo % 4 == 0) && (iNo % 100 != 0)))
            {
                System.out.println("It is leap year");
            }  
            else
                {
                    System.out.println("It is not leap year");
                } 
    }
}

class program11
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckLeapYear(2024);
    }
}