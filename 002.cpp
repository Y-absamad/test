#include <iostream>
using namespace std;
int main()
{
    int x = 20;
    
    cout<<&x<<endl;  // addres x
    
    int* ptr = &x;  // ptr storge addres x not value

    cout<<*ptr<<endl; // print pointer *ptr = 20
                    // just ptr whit out *  = addres ptr = 00cffc4 

    int *hide = new int (10); // storge value(10) not have name

    cout<<*hide<<endl; // 10


}