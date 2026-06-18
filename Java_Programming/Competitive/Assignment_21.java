// Program to calculate the product of digits of a number.

class LogicX
{
    void productOfDigits(int iNo)
    {
        int iDigit = 0;
        int iProduct = 0;

        iProduct = 1;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            
            iProduct = iProduct * iDigit;

            iNo = iNo / 10;
        }

        System.out.println("Product of digits is "+iProduct);
    }
}

class Assignment_21
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.productOfDigits(234);
    }
}