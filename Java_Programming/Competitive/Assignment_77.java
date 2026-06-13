// Program to check whether a number is a palindrome or not.

class LogicX
{
    void checkPalindrome(int iNo)
    {
        int iDigit = 0;
        int iTemp = 0;
        int iJoin = 0;

        iTemp = iNo;

        while (iNo != 0)
        {
            iDigit = iNo % 10;

            iJoin = iJoin * 10 + iDigit;
            
            iNo = iNo / 10;
        }

        if(iJoin == iTemp)
        {
            System.out.println("Number is palindrome.");
        }
        else
        {
            System.out.println("Number is not palindrome.");
        }
    }
}

class Assignment_77
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.checkPalindrome(122);
    }
}