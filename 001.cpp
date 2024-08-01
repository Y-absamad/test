#include <iostream>
using namespace std;
int main()
{
    int i;
    float *ptr;
    cout << "Enter array size\n";
    cin >> i;
    ptr = new float[i];
    delete []ptr;
    
}