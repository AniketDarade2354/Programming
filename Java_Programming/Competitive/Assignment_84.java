// Program to find the sum of even and odd digits separately in a number.

class LogicX
{
    void sumEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Sum of even digits " + iSumEven);
        System.out.println("Sum of odd digits " + iSumOdd);
    }
}

class Assignment_84
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.sumEvenOddDigits(123456);
    }
}