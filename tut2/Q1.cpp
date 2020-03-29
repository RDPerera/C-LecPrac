#include<iostream>
using namespace std;

class Shape
{
    protected:
        float width;
        float height;
    public:
        Shape()
        {
            width=0;
            height=0;
        }
        float set_data(float a,float b)
        {
            width=a;
            height=b;
        }
};
class Triangle :  public Shape
{
    private:
        float area=0;
    public:
        float getArea()
        {
            area=width*height/2;
        }
        void displayArea(){
            cout << area << endl;
        }
};
class Rectangle :  public Shape
{
    private:
        float area=0;
    public:
        float getArea()
        {
            area=width*height;
        }
        void displayArea(){
            cout << area << endl;
        }
};
int main()
{
    Triangle t1;
    Rectangle r1;
    t1.set_data(4,3);
    r1.set_data(3,4);
    cout << t1.getArea() << endl;
    cout << r1.getArea() << endl;
    t1.displayArea();
    r1.displayArea();

    return 0;
}