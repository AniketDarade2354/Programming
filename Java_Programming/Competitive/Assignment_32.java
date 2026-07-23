// Program which accept one number from user and off 7th and 10th bit of that number if it is on. Return modified number.
//
// Input: 577
// Output: 1

import java.util.Scanner;

class Bitwise
{

    // Position : 7 & 10
    public int OffBit(int iNo)
    {
        int iMask = 0x00000240;

        if((iMask | iNo) == iNo)
        {
            iNo = iMask ^ iNo;
        }
        
        return iNo;
    }
}

class Assignment_32
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