class Logic
{
    void sumOfDigits(int iNo)
    {
        int iDigit = 0, iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        System.out.println("Sum of digit of number:"+iSum);
    }
}

class program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumOfDigits(1234);
    }
}