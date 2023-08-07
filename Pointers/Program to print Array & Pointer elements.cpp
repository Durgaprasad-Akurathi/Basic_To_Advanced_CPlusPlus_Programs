#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a[5] = {1, 2, 3, 4, 5};
    int* p; // Declaring Pointer
    p = new int[5]; // Initializing the pointer to heap memory
    p[0] = 6;
    p[1] = 7;
    p[2] = 8;
    p[3] = 9;
    p[4] = 10;
    cout << "Printing Array Elements: ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "Printing Pointer Elements: ";
    for (int i = 0; i < 5; i++)
        cout << p[i] << " ";
    delete[] p;
}
