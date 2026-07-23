// Program which checks whether first and last bit is On or Off. First bit means bit number 1 and last bit means bit number 32.

import java.util.Scanner;

class Bitwise
{

    // Position : 1 & 32
    public boolean CheckBit(int iNo)
    {
        int iMask = 0x80000001;

        if((iMask | iNo) == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
            
    }
}

class Assignment_30
{

    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = Integer.parseUnsignedInt(sobj.nextLine());

        bRet = bobj.CheckBit(iValue);

        if(bRet == true)
        {
            System.out.println("1st & 32th Bit is On.\n");
        }
        else
        {
            System.out.println("1st & 32th Bit is Off.\n");
        }
    }

}