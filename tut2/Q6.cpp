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
Rectangle::~Rectangle()
{
	m_width=0;
	m_height=0;
}
void Rectangle :: DisplayArea(void)
{
	cout << "Area :" << m_width*m_height;
}

class NewRectangle : public Rectangle 
{
	public:
		NewRectangle(int w=0,int h=0):Rectangle(w=0,h=0){
			m_height=h;
			m_width=w;
		}
		void SetWidth(int w); //Set the width to w
		void SetHeight(int h); //Set the height to h
		~NewRectangle(); 
}; 

void NewRectangle::SetWidth(int w)
{
	m_width=w;
}
void NewRectangle::SetHeight(int h)
{
	m_height=h;
}
NewRectangle :: ~NewRectangle()
{
	m_width=0;
	m_height=0;
}

int main()
{
	NewRectangle MyRectangle;
	MyRectangle.SetHeight(20);
	MyRectangle.SetWidth(100); 
	MyRectangle.DisplayArea();
	return 0;
	
}
