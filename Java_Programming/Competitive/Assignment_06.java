// Program to check whether a number is prime or not.

class LogicX
{
    void checkPrime(int iNo)
    {
        int iCnt = 0;
        

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println("Number is not prime.");
                return; // Bad programming practice
            }
            else
            {
                System.out.println("Number is prime.");
                return; // Bad programming practice
            }
        }
    }
}

class Assignment_06
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.checkPrime(11);
    }
}

// Time Complexity: O(N/2)
// Where N > 0