// Program which accept one number from user and count number of ON(1) bits in it without using % and / operator.
//
// Input: 11
// Output: 3

import java.util.*;

class Bitwise
{
    public int CountOne(int iNo)
    {
        int iMask = 0x1;
        int iCnt = 0, iCount = 0;

        for(iCnt = 1; iCnt <= 32; iCnt++)
        {
            if( (iMask & iNo) == iMask)
            {
                iCount++;
            }
            
            iMask = iMask << 1;
        }

        return iCount;

    }
}

class Assignment_41 
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number :");
        iValue = Integer.parseUnsignedInt(sobj.nextLine());

        iRet = bobj.CountOne(iValue);

        System.out.println("Count of on bits : "+iRet);
    }    
}
