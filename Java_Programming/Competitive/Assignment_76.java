// Program to find the sum of digits of a number.
class LogicX
{
    void sumOfDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Sum of digits "+iSum);
    }
}

class Assignment_76
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.sumOfDigits(1234);
    }
}