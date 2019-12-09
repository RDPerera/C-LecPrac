#include <iostream>
#define size 27
using namespace std;
class stack{
    private:
        int top=0;
        char stck[size];
    public:
        //stack();
        void load_stack();
        void show_stack(stack stk);
        char pop();
        void push(char ch);
};
// stack :: stack(){
//     top=0;
// }
void stack ::push(char ch){
    if (top==size)
    {
        cout << "Overflow";
    }
    else
    {
        stck[top++]=ch;
    }
    
}
char stack ::pop(){
    if (top<0)
    {
        cout << "UnderFlow";
    }
    else
    {
        cout << stck[top--];
    }
    
}
int main()
{
    stack s1;
    s1.push('A');
    cout << s1.pop();
    return 0;
}