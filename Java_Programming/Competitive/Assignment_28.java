// Program which checks whether 7th & 15th & 21th, 28th bit is on or off.

import java.util.Scanner;

class Bitwise
{

    // Position : 7 & 15 & 21 & 28
    public boolean CheckBit(int iNo)
    {
        int iMask = 0x08104040;

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

class Assignment_28
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
            System.out.println("7 & 15 & 21 & 28 Bit is On.\n");
        }
        else
        {
            System.out.println("7 & 15 & 21 & 28 Bit is Off.\n");
        }
    }

}