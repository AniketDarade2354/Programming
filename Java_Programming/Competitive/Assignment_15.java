// Program to calculate the power of a number using loops.

class LogicX
{
    void calculatePower(int iBase, int iExp)
    {
        int iCalculatePower = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iExp;iCnt++ )
        {
            iCalculatePower = iCalculatePower * iBase; 
        }

        System.out.println("Calculated power is "+iCalculatePower);
    }
}

class Assignment_90
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.calculatePower(2, 10);
    }
}

// Time Complexity: O(N)
// Where N > 0