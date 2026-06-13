// Program to print all numbers from 1 to N that are divisible by both 2 and 3.

class LogicX
{
    void printDivisibleBy2and3(int iNo)
    {
        int iCnt = 0;

        System.out.println("Number which divisible by 2 and 3 ");
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if( (iCnt % 2 == 0 ) && (iCnt % 3 == 0) )
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Assignment_100
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.printDivisibleBy2and3(30);
    }
}

// Time Complexity: O(N)
// Where N > 0