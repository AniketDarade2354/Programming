// Recursive program which accept string from user and count number of small characters.
//
// Input: HElloWOrlD
// Output: 5

#include <iostream>
using namespace std;

int Small(char *str)
{
    static int iCount = 0;

    if(*str != 0)
    {
       if(*str >= 'a' && *str <= 'z')
       {
        iCount++;
       } 
       str++;
       Small(str);
    }

    return iCount;
}

int main()
{
    char cValue[30] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",cValue);
    
    iRet = Small(cValue);

    cout << "Count of small characters : " << iRet << endl;
    return 0;
}