// Recursive program which accept string from user and count number of characters.
//
// Input: Hello
// Output: 5

#include <iostream>
using namespace std;

int Strlen(char *str)
{
    static int iCount = 0;
    
    if(*str != '\0')
    {
        iCount++;
        str++;

        Strlen(str);
    }
    
    return iCount;
}

int main()
{
    char arr[20]; 
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%s",&arr);
    
    iRet = Strlen(arr);

    cout << "Count of letters : " << iRet << endl;
    return 0;
}