// Program to print all odd numbers up to N.

class LogicX
{
    void printOddNumbers(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 0;iCnt < iNo;iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Assignment_08
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.printOddNumbers(20);
    }
}

// Time Complexity: O(N)
// Where N > 0