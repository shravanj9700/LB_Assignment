class Logic
{
    void findMax(int iNo1, int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println("Maxium number is: "+iNo1);
        }
        else
        {
            System.out.println("Maximum number is :"+iNo2);
        }
    }
}

class program3
{
    public static void main( )
    {
        Logic lobj = new Logic();
        lobj.findMax(11,21);
    }
}