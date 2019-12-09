#include <iostream>
using namespace std;
int amount =  123;
int main()
{
    int amount = 456;
    cout<<::amount<<endl;//display the globle
    cout<<amount<<endl;//display the local
    return 0;

}