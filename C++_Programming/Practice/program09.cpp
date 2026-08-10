#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX();
        ArrayX(int Size);
        ArrayX(const ArrayX &obj);

        ~ArrayX();
        
        void Accept();
        int Max();
        void Display();
};

ArrayX :: ArrayX()
{
    iSize = 0;
    Arr = NULL;
}

ArrayX :: ArrayX(int Size)
{
    this->iSize = Size;
    this->Arr = new int[iSize];
}

ArrayX :: ArrayX(const ArrayX &obj)
{
    iSize = obj.iSize;

    Arr = new int[iSize];

    for(int i = 0; i < iSize; i++)
    {
        Arr[i] = obj.Arr[i];
    }
}

ArrayX :: ~ArrayX()
{
    delete [] Arr;
    Arr = NULL;
    iSize = 0;
}

void ArrayX :: Accept()
{
    for(int i = 0; i < this->iSize; i++)
    {
        cin >> this->Arr[i];
    }
}

int ArrayX :: Max()
{
    int i = 0;
    int iMax = Arr[0];

    for(i = 1; i < this->iSize; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }

    return iMax;
}

void ArrayX :: Display()
{
    for(int i = 0; i< iSize; i++)
    {
        cout << Arr[i] << endl;
    }
}

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout << "Enter the number of elements : \n";
    cin >> iLength;

    
    if(iLength == 0)
    {
        cout << "Invalid input\n";
        return 0;
    }
    
    ArrayX aobj(iLength);

    cout << "Enter elements : \n";

    aobj.Accept();

    cout <<endl<< "Elements are :\n";
    aobj.Display();

    iRet = aobj.Max();

    cout << "Maximum number is : " << iRet << endl;
    return 0;
}