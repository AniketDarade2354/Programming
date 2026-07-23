// Program to print numbers from N down to 1 in reverse order.

class LogicX
{
    void printReverse(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt >= 1 ;iCnt--)
        {
            System.out.println(iCnt);
        }
        
    }
}

class Assignment_17
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.printReverse(10);
    }
}

// Time Complexity: O(N)
// Where N > 0