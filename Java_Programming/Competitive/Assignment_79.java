// Program to find the minimum of three numbers.

class LogicX
{
    void findMin(int a, int b, int c)
    {
        if( a < c )
        {
            if( b < c)
            {
                System.out.println("Maximum number is "+c);
            }
            
        }
        else if( b < a)
        {
            if( c < a )
            {
                System.out.println("Maximum number is "+a);
            }   
        }
        else 
        {
            if( c < b )
            {
                System.out.println("Maximum number is "+b);
            }  
        }
    }
}

class Assignment_79
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.findMin(3, 7, 2);
    }
}

// Time Complexity: O(1)