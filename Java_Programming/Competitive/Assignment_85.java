// Program to check whether a number is positive, negative, or zero.

class LogicX
{
    void checkSign(int iNo)
    {
        if(iNo < 0)
        {
            System.out.println("Number is negative.");
        }
        else if( iNo == 0)
        {
            System.out.println("Number is zero.");   
        }
        else
        {
            System.out.println("Number is positive.");
        }
    }
}

class Assignment_85
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.checkSign(-8);
    }
}

// Time Complexity: O(1)