// Program to print the multiplication table of a number.

class LogicX
{
    void printTable(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
        {
            System.out.println(iNo+" * "+iCnt+" = "+(iCnt * iNo));
        }
    }
}

class Assignment_05
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.printTable(5);
    }
}

// Time Complexity: O(N)
// Where N = 10