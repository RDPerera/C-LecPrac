#include <iostream>
class alpha
{
    int data;

public:
    alpha() {}
    alpha(int d) { data = d; }
    void display()
    {
        std::cout << data;
    }
    alpha &operator=(alpha &a)
    {
        data = a.data;
        std::cout << "\n Assignment operator invoked";
        return *this;
    }
};
int main()
{
    alpha a1(37), a2, a3;
    a3 = a2 = a1;
    std::cout << "\n a2=";
    a2.display();
    std::cout << "\n a3=";
    a3.display();
}