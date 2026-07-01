// Program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.
//
// Input: 137
// Output: 713


import java.util.Scanner;

class Bitwise
{

    // Position : 7 & 10
    public int ToggleBit(int iNo)
    {
        int iMask = 0x00000240;

        iNo = iMask ^ iNo;
        
        return iNo;
    }
}

class Assignment_34
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