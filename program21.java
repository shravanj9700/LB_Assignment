class Logic
{
    void ProductOfDigits(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iMult = iMult * iDigit;

            iNo = iNo / 10;
        }
        System.out.println("Product of digit is : "+iMult);
    }
}

class program21
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.ProductOfDigits(234);
    }
}