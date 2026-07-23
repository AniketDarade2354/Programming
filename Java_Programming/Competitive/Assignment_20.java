// Program to find the smallest digit in a given number.

class LogicX
{
    void findSmallestDigit(int iNo)
    {
        int iSmall = 0;
        int iDigit = 0;

        iSmall = iNo % 10;
        while(iNo > 0)
        {
            iDigit = iNo % 10;

            if (iDigit < iSmall)
            {
                iSmall = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Smallest digit is "+iSmall);
    }
}

class Assignment_20
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.findSmallestDigit(45872);
    }
}