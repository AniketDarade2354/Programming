// Program which checks whether 7th & 8th & 9th bit is on or off.

import java.util.Scanner;

class Bitwise
{

    // Position : 7 & 8 & 9
    public boolean CheckBit(int iNo)
    {
        int iMask = 0x000001C0;

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

class Assignment_29
{

    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        bRet = bobj.CheckBit(iValue);

        if(bRet == true)
        {
            System.out.println("7th & 8th & 9th Bit is On.\n");
        }
        else
        {
            System.out.println("7th & 8th & 9th Bit is Off.\n");
        }
    }

}