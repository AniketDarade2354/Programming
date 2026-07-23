// Program which accept one number from user and off 7th bit of that number if it is on. Return modified number.
//
// Input: 79
// Output: 15

import java.util.Scanner;

class Bitwise
{

    // Position : 7
    public int OffBit(int iNo)
    {
        int iMask = 0x00000040;

        if((iMask | iNo) == iNo)
        {
            iNo = iMask ^ iNo;
        }
        
        return iNo;
    }
}

class Assignment_31
{

    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = bobj.OffBit(iValue);

        System.out.println("Modified number : "+iRet);
    }

}