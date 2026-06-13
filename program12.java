class Logic
{
    void DisplayGrade(int Marks)
    {
        if(Marks >= 90 && Marks <= 100)
        {
            System.out.println("Grade A");
        }
        else if(Marks >= 75 && Marks <= 90)
        {
            System.out.println("Grade B");
        }
        else if(Marks >= 60 && Marks <= 75)
        {
            System.out.println("Grade C");
        }
        else
        {
            System.out.println("Grade D");
        }
    }
}

class program12
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.DisplayGrade(82);
    }
}