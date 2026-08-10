// A class ArrayX stores an array of integers dynamically that returns the sum of all elements in the array

#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX()
        {
            iSize = 0;
            Arr = NULL;
        }

        ArrayX(int Size)
        {
            this->iSize = Size;
            this->Arr = new int[iSize];
        }

        ArrayX(const ArrayX &obj)
        {
            iSize = obj.iSize;

            Arr = new int[iSize];

            for(int i = 0; i < iSize; i++)
            {
                Arr[i] = obj.Arr[i];
            }
        }

        ~ArrayX()
        {
            delete [] Arr;
            Arr = NULL;
            iSize = 0;
        }

        void Accept()
        {
            for(int i = 0; i < this->iSize; i++)
            {
                cin >> this->Arr[i];
            }
        }

        int Summation()
        {
            int i = 0;
            int iSum = 0;

            for(i = 0; i < this->iSize; i++)
            {
                iSum = iSum + Arr[i];
            }

            return iSum;
        }

        void Display()
        {
            for(int i = 0; i< iSize; i++)
            {
                cout << Arr[i] << endl;
            }
        }

};

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

    iRet = aobj.Summation();

    cout << "Summation is : " << iRet << endl;

    ArrayX aobj2;

    aobj2 = aobj;

    aobj2.Display();

    return 0;
}