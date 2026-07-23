// Program which accept one number from user and On its first 4 bits. Return modified number.
//
// Input: 73
// Output: 79


import java.util.Scanner;

class Bitwise
{

    // Position : first 4 bits
    public int ToggleBit(int iNo)
    {
        int iMask = 0x0000000F;

        iNo = iMask | iNo;
        
        return iNo;
    }
}

class Assignment_35
{

    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = bobj.ToggleBit(iValue);

        System.out.println("Modified number : "+iRet);
    }

}