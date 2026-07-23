// Program to print each digit of a number separately.

class LogicX
{
    void printDigits(int iNo)
    {
        int iDigit = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            System.out.println(iDigit);
            
            iNo = iNo / 10;
        }
    }
}

class Assignment_14
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.printDigits(9876);
    }
}