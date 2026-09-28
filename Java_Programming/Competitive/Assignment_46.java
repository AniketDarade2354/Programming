import java.util.*;

class Assignment_46
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int ExtraDays = 0;
        int iPay = 0;

        System.err.println("Enter Days : ");
        int days = sobj.nextInt();

        if(days < 0)
        {
            System.out.println("Invalid input");
            return;
        }

        if(days >= 0 && days <= 7)
        {
            System.err.println("No fine");
            return;
        }
        else if (days >= 8 && days <= 12) 
        {
            ExtraDays = days - 7;
            iPay = ExtraDays * 5;

        }
        else
        {
            ExtraDays = days - 7;
            iPay = 5 * 5;
            iPay = iPay + ((ExtraDays - 5) * 10);
        }

        System.err.println("Total fine to be paid: Rs. "+iPay + " /-");
        
        sobj.close();
    }    
}