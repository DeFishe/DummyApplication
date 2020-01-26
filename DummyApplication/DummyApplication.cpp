#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    int varInt = 123456;
    string varString = "DefaultString";
    char arrChar [128]= "Long char array right there ->";
    int * ptr2int = &varInt;
    int ** ptr2ptr = &ptr2int;
    int*** ptr2ptr2ptr = &ptr2ptr;

    while (1)
    {
        cout << "Process ID: " << GetCurrentProcessId() << endl;
        cout << endl;
        cout << "varInt       0x" << &varInt << " = " << varInt << endl;
        cout << "varString    0x" << &varString << " = " << varString << endl;
        cout << "arrChar[128] 0x" << &arrChar << " = " << arrChar << endl;
        cout << endl;
        cout << "ptr2int      0x" << &ptr2int << endl;
        cout << "ptr2ptr      0x" << &ptr2ptr << endl;
        cout << "ptr2ptr2ptr  0x" << &ptr2ptr2ptr << endl;
        getchar();
    }



    
    
}
