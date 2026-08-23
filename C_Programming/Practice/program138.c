#include <stdio.h>

// Call by value
void Swap(int no1, int no2)
{
    int temp = 0;

    temp = no1;
    no1 = no2;
    no2 = temp;
}

int main()
{
    int i = 11;
    int j = 21;

    Swap(i, j);

    printf("%d\n",i);
    printf("%d\n",j);

    return 0;
}