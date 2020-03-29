#include<iostream>
using namespace std;

class ThreeNos
{
    private :
        int n1;
        int n2;
        int n3;

    public:
        ThreeNos();                      //initialize numbers to 0
        ThreeNos(int x, int y, int z);   //initialize numbers to x,y,z
        int getMax(int x, int y, int z); //return the maximum of the three numbers
        int getMin(int x, int y, int z); // return the minimum of the three numbers
        int getMin();
        int getMax();
        int sum();
        float average();
};
ThreeNos ::ThreeNos()
{
    n1 = 0;
    n2 = 0;
    n3 = 0;
}
ThreeNos ::ThreeNos(int x, int y, int z)
{
    n1 = x;
    n2 = y;
    n3 = z;
}
int ThreeNos ::getMax(int x, int y, int z)
{
    return x > y && x > y ? x : y > z ? y : z;
}
int ThreeNos ::getMax()
{
    return n1 > n2 && n1 > n3 ? n1 : n2 > n3 ? n2 : n3;
}
int ThreeNos ::getMin(int x, int y, int z)
{
    return x < y && x < z ? x : y < z ? y : z;
}
int ThreeNos ::getMin()
{
    return n1 < n2 && n1 < n3 ? n1 : n2 < n3 ? n2 : n3;
}
int ThreeNos ::sum()
{
    return n1 + n2 + n3;
}
float ThreeNos ::average()
{
    return sum() / 3;
}
int main()
{
    ThreeNos t1(5,9,7);
    cout << "SUM = " << t1.sum() << " AVG = "  << t1.average() << endl;
    cout << "MAX = "<< t1.getMax() << " MIN = "<< t1.getMin() << endl;
    cout << "MAX = "<< t1.getMax(2,3,4)<< " MIN = " << t1.getMin(2,3,4) << endl;
    return 0;
}