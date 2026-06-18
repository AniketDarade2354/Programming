// Program to count total number of factors of a given number.

class LogicX
{
    void countFactors(int iNo)
    {
        int iCnt = 0;
        int iCountFactor = 0;

        for(iCnt = 1; iCnt <= iNo/2 ;iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCountFactor++;
            }
        }
        System.out.println("Total number of factors is "+iCountFactor);
    }
}

class Assignment_24
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.countFactors(20);
    }
}

// Time Complexity: O(N/2)
// Where N > 0