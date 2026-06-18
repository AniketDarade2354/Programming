// Program to count how many even and odd numbers are present between 1 and N.


class LogicX
{
    void countEvenOddRange(int iNo)
    {
        int iCnt = 0;
        int iCountEven = 0;
        int iCountOdd = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }

        System.out.println("Count of even numbers is "+iCountEven);
        System.out.println("Count of odd numbers is "+iCountOdd);
        
    }
}

class Assignment_22
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.countEvenOddRange(50);
    }
}

// Time Complexity: O(N)
// Where N > 0