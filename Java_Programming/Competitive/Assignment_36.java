// Program which accept one number and position from user and check whether bit at that position is on or off. If bit is on return TRUE otherwise return FALSE.
//
// Input: 10  2
// Output: TRUE

import java.util.*;

class Bitwise 
{
    public boolean CheckBit(int iNo, int iPos)
    {
        int iMask = 0x1;
        boolean bReturn = false;

        iMask = iMask<<(iPos - 1);

        if( (iMask | iNo) == iNo)
        {
            bReturn = true;
        }

        return bReturn;

    }
}

class Assignment_36
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iLocation = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter location of bit : ");
        iLocation = sobj.nextInt();
        
        bRet = bobj.CheckBit(iValue, iLocation);

        if(bRet == true)
        {
            System.out.println("Position "+iLocation+" bit is on.");
        }
        else
        {
            System.out.println("Position "+iLocation+" bit is off.");
        }

    }
}