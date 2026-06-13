// Program to find the maximum of two numbers.

class LogicX
{
    void findMax(int a, int b)
    {
        if( a < b)
        {
            System.out.println("Maximum number is "+b);
        }
        else
        {
            System.out.println("Maximum number is "+a);
        }
    }
}

class Assignment_78
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.findMax(20, 15);
    }
}

// Time Complexity: O(1)