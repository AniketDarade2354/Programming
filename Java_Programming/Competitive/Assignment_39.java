// Program which accept one number and position from user and toggle that bit. Return modified number.
//
// Input: 10  3
// Output: 14

import java.util.*;

class Bitwise 
{
    public int ToggleBit(int iNo, int iPos)
    {
        int iMask = 0x1;

        iMask = iMask<<(iPos - 1);

        iNo = iMask ^ iNo;

        return iNo;

    }
}

class Assignment_39
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iLocation = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter location of bit : ");
        iLocation = sobj.nextInt();
        
        iRet = bobj.ToggleBit(iValue, iLocation);

        System.out.println("Modified number : "+iRet);
        

    }
}