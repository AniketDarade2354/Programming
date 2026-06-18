// Program to display all factors of a given number.

class LogicX
{
    void displayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo/2 ;iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Assignment_23
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.displayFactors(12);
    }
}

// Time Complexity: O(N/2)
// Where N > 0