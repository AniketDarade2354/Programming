// Program which accept two numbers from user and display position of common ON bits from that two numbers.
//
// Input: 10 15     (1010   1111)
// Output: 2

import java.util.*;

class Bitwise
{
    public int CommonBits(int iNo1, int iNo2)
    {
        int iMask1 = 0x1, iMask2 = 0;
        int iCnt = 0, iCount = 0;

        iMask2 = iNo1 & iNo2;

        for(iCnt = 1; iCnt <= 32; iCnt++)
        {
            if( (iMask2 & iMask1) == iMask1)
            {
                iCount++;
            }
            
            iMask1 = iMask1 << 1;
        }

        return iCount;

    }
}

class Assignment_42 
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0 , iRet = 0;

        System.out.println("Enter number :");
        iValue1 = Integer.parseUnsignedInt(sobj.nextLine());

        System.out.println("Enter number :");
        iValue2 = Integer.parseUnsignedInt(sobj.nextLine());

        iRet = bobj.CommonBits(iValue1, iValue2);

        System.out.println("Count of common on bits : "+iRet);
    }    
}
