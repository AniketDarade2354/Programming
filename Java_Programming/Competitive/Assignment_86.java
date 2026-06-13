// Program to check whether a given year is a leap year or not.

class LogicX
{
    void checkLeapYear(int iYear)
    {
         if(iYear % 4 == 0)
         {
            System.out.println("This year is leap year.");
         }
         else
         {
            System.out.println("This year is not leap year.");
         }
    }
}

class Assignment_86
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.checkLeapYear(2024);
    }
}

// Time Complexity: O(1)