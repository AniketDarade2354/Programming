// Program to display the grade of a student based on marks.

class LogicX
{
    void displayGrade(int iMarks)
    {
        if( iMarks > 80 && iMarks <= 100)
        {
            System.out.println("Grade : A");
        }
        else if( iMarks > 60 && iMarks <= 80)
        {
            System.out.println("Grade : B");
        }
        else if( iMarks > 0 && iMarks < 35)
        {
            System.out.println("Your are the selected one");
        }
        else
        {
            System.out.println("Grade : C");
        }
    }
}

class Assignment_87
{
    public static void main(String A[])
    {
        LogicX lobj = new LogicX();
        lobj.displayGrade(12);
    }
}

// Time Complexity: O(1)