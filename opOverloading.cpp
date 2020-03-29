#include<iostream>

using namespace std;

class Complex
{
	private:
		int real;
		int unReal;
	public:
		Complex();
		Complex(int a,int b);
		void displayR();
		friend void display();
		Complex& operator + (Complex &a);
		friend Complex& operator =(Complex &b);
};
Complex::Complex()
{
	real=0;
	unReal=0;
}
Complex::Complex(int a,int b)
{
	real=a;
	unReal=b;
}
void Complex::displayR()
{
	cout << real;
}
void display()
{
	cout << real << " " <<unReal;
}
Complex& Complex::operator +(Complex &a)
{
	real=real+a.real;
	unReal=unReal+a.unReal;
	return *this;
}
Complex& Complex::operator =(Complex &b)
{
	real=b.real;
	unReal=b.unReal;
	return *this;
}
int main()
{
	Complex t;
	return 0;
}
