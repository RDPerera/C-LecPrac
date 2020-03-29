#include<iostream>
using namespace std;
class Shape
{
	private:
	protected:
		float width,height;
	public:
		void set_data(float a,float b)
		{
			width=a;height=b;
		}
		Shape();
};

/* this is Q1(u can define it in class scope too) */
Shape::Shape()
{
	width=0;
	height=0;
}
/**************************************************/


class Triangle : public Shape
{
	private:
		float area()
		{
			return width*height/2;
		}
	public:
		void displayArea()
		{
			cout << area() << endl;	
		}	
};

class Rectangle : public Shape
{
	private:
		float area()
		{
			return width*height;
		}
	public:
		void displayArea()
		{
			cout << area() << endl;
		}
};



/* the main function */
int main()
{
	Triangle t;
	Rectangle r;
	t.set_data(4,6);
	r.set_data(4,6);
	t.displayArea();
	r.displayArea();
	return 0;
}

/* if we define constructor in class scope
class Shape
{
	private:
	protected:
		float width,height;
	public:
		void set_data(float a,float b)
		{
			width=a;height=b;
		}
		Shape()
		{	
			width=0;
			height=0;
		}
};
 
thats it... manu..
*/

