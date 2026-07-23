// Program to find the largest digit in a given number.

class LogicX
{
    void findLargestDigit(int iNo)
    {
        int iLarge = 0;
        int iDigit = 0;

        iLarge = iNo % 10;
        
        while(iNo > 0)
        {
            iDigit = iNo % 10;

            if (iDigit > iLarge)
            {
                iLarge = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Largest digit is "+iLarge);
    }
}

class Assignment_19
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.findLargestDigit(83429);
    }
}