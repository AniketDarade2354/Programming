// Program to check whether a number is divisible by 5 and 11 or not.

class LogicX
{
    void checkDivisible(int iNo)
    {
        if( (iNo % 5 == 0) && (iNo % 11 == 0) )
        {
            System.out.println("The number is divisible by 5 and 11.");
        }
        else
        {
            System.out.println("The number is not divisible by 5 and 11.");
        }
    }
}

class Assignment_13
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.checkDivisible(55);
    }
}

// Time complexity: O(1)
