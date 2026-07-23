// Program to check whether a number is a perfect number or not.

class LogicX
{
    void checkPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1;iCnt <= iNo/2;iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            System.out.println("Number is prime.");
        }
        else
        {
            System.out.println("Number is not prime.");
        }
    }
}

class Assignment_18
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.checkPerfect(6);
    }
}

// Time Complexity: O(N/2)
// Where N > 0