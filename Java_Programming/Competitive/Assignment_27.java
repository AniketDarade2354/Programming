// Program which checks whether 5th & 18th bit is on or off.

import java.util.Scanner;

class Bitwise
{

    // Position : 5 & 18
    public boolean CheckBit(int iNo)
    {
        int iMask = 0x00020010;

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

class Assignment_27
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
            System.out.println("5th and 18th Bit is On.\n");
        }
        else
        {
            System.out.println("5th and 18th Bit is Off.\n");
        }
    }

}