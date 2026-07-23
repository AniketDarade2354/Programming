// Program which accept one number, two positions from user and check whether bit at first or bit at second position in ON or OFF.
//
// Input: 10   3 7
// Output: TRUE

import java.util.*;

class Bitwise
{
    public boolean CheckBits(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 0x1, iMask2 = 0x1;
        boolean bReturn = false;

        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1); 

        if( ((iMask1 | iNo) == iNo) ||
            ((iMask2 | iNo) == iNo))
        {
            bReturn = true;
        }

        return bReturn;

    }
}

class Assignment_44
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iLoc1 = 0, iLoc2 = 0;
        boolean bRet = false;

        System.out.println("Enter number :");
        iValue = Integer.parseUnsignedInt(sobj.nextLine());

        System.out.println("Enter first bit position :");
        iLoc1 = Integer.parseUnsignedInt(sobj.nextLine());

        System.out.println("Enter second bit position :");
        iLoc2 = Integer.parseUnsignedInt(sobj.nextLine());

        bRet = bobj.CheckBits(iValue, iLoc1, iLoc2);

        if(bRet == true)
        {
            System.out.println(iLoc1+"th or "+iLoc2+"th bit is On.");
        }
        else
        {
            System.out.println(iLoc1+"th or "+iLoc2+"th bit is Off.");
        }
    }    
}
