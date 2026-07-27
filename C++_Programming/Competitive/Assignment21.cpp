// Recursive program which accept string from user and count white spaces.
//
// Input: HE llo WOr lD
// Output: 3

#include <iostream>
using namespace std;

int WhiteSpace(char * str)
{
    static int iCount = 0;

    if(*str != 0)
    {
       if(*str == ' ')
       {
        iCount++;
       } 
       str++;
       WhiteSpace(str);
    }

    return iCount;
}

int main()
{
    char cValue[30] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",cValue);
    
    iRet = WhiteSpace(cValue);

    cout << "Count of white space : " << iRet << endl;
    return 0;
}