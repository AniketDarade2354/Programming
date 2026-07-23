// Program to find the sum of all even numbers up to N.

class LogicX
{
    void sumEvenNumbers(int iNo)
    {
        int iCnt = 0;
        int iSumEven = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSumEven = iSumEven + iCnt;
            }
        }
        System.out.println("Sum of even numbers "+iSumEven);
    }
}

class Assignment_16
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.sumEvenNumbers(10);
    }
}

// Time Complexity: O(N)
// Where N > 0