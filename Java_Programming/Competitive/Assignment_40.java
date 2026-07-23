// Program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number.
// (Nibble is a group of four bits)

import java.util.*;

class Bitwise 
{
    public int ToggleBit(int iNo)
    {
        int iMask = 0xF000000F;

        iNo = iMask ^ iNo;

        return iNo;
    }
}

class Assignment_40
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = Integer.parseUnsignedInt(sobj.nextLine());

        iRet = bobj.ToggleBit(iValue);

        System.out.println("Modified number : "+iRet);
        

    }
}