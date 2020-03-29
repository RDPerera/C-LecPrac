#include<iostream>

using namespace std;

class Rectangle
{
	public:
		Rectangle(int w, int h);
		void DisplayArea(void);
		~Rectangle();
		int m_width; 
		int m_height;
};

Rectangle::Rectangle(int w,int h)
{
	m_width=w;
	m_height=h;
}
Rectangle::~Rectangle(int w,int h)
{
	m_width=0;
	m_height=0;
}
void Rectangle :: DisplayArea(void)
{
	cout << "Area :" << m_width*m_height;
}

int main()
{
	Rectangle r1(2,3);
	r1.DisplayArea();
	return 0;
	
}
