#include<iostream>
using namespace std;
class counter
{
        int count;
    public:
        counter(int);
        void setCounter(int);
        void increment(int);
        void decrement(int);
        void display();
};
counter::counter(int init=0)
{
    count=init;
}
void counter::setCounter(int c)
{
    count=c;
}
void counter::increment(int in=1)
{
    count=count+in;
}
void counter::decrement(int de=1)
{
    count=count-de;
}
void counter::display()
{
    cout << count << endl;
}
int main()
{
    counter myCounter;
    myCounter.display();
    myCounter.setCounter(5);
    myCounter.display();
    myCounter.increment();
    myCounter.display();
    myCounter.decrement();
    myCounter.display();
    myCounter.increment(100);
    myCounter.display();
    myCounter.decrement(50);
    myCounter.display();
    return 0;
}