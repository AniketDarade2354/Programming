// Program which accept one number from user and check whether 9th or 12th bit is On or Off.
//
// Input: 257
// Output: TRUE

import java.util.*;

class Bitwise
{
    public boolean CheckBits(int iNo)
    {
        int iMask1 = 0x00000100,
            iMask2 = 0x00000800;
        boolean bReturn = false;

        if( ((iMask1 | iNo) == iNo) ||
            ((iMask2 | iNo) == iNo))
        {
            bReturn = true;
        }

        return bReturn;

    }
}

class Assignment_43
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number :");
        iValue = Integer.parseUnsignedInt(sobj.nextLine());

        bRet = bobj.CheckBits(iValue);

        if(bRet == true)
        {
            System.out.println("9th or 12th bit is On.");
        }
        else
        {
            System.out.println("9th or 12th bit is Off.");
        }
    }    
}
