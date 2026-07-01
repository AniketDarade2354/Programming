// Program which accept one number from user and range of positions from user. Toggle all bits from that range.
//
// Input: 897   9 13
// Output: Toggle all bits from position 9 to 13 of input number ie 879

import java.util.*;

class Bitwise
{
    public int ToggleBitRange(int iNo, int iStart, int iEnd)
    {
        int iMask1 = 0x1, iMask2 = 0x1;
        int iCnt = 0;

        iMask1 = iMask1 << (iStart - 1);
        iMask2 = iMask2 << (iEnd - 1);

        for(iCnt = iMask1; iCnt <= iMask2; iCnt = iCnt << 1)
        {
            iNo = iNo ^ iCnt;

        }

        return iNo;

    }
}

class Assignment_45
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iLoc1 = 0, iLoc2 = 0;
        int iRet = 0;

        System.out.println("Enter number :");
        iValue = Integer.parseUnsignedInt(sobj.nextLine());

        System.out.println("Enter start bit position :");
        iLoc1 = Integer.parseUnsignedInt(sobj.nextLine());

        System.out.println("Enter end bit position :");
        iLoc2 = Integer.parseUnsignedInt(sobj.nextLine());

        iRet = bobj.ToggleBitRange(iValue, iLoc1, iLoc2);

        System.out.println("Modified number : "+iRet);
    }    
}
