#include<iostream>
using namespace std;

class ThreeNos
{
	private:
		int n1,n2,n3;
	public:
		ThreeNos();
		ThreeNos(int x,int y,int z);
		int getMax(int x,int y,int z);
		int getMin(int x,int y,int z);
		int sum();
		float average(); 
};

/* answers */

ThreeNos :: ThreeNos()
{
	n1=0;
	n2=0;
	n3=0;
}
ThreeNos :: ThreeNos(int x,int y,int z)
{
	n1=x;
	n2=y;
	n3=z;
} 
int ThreeNos::getMax(int x,int y,int z)
{
	return x>y ? x>z ? x:z : y>z ? y:z;
}

int ThreeNos::getMin(int x,int y,int z)
{
	return x<y ? x<z ? x:z : y<z ? y:z;
}
int ThreeNos::sum()
{
	return n1+n2+n3;
}
int ThreeNos::average()
{
	return (float)(n1+n2+n3)/3;
}
int main()
{
	ThreeNos t1();
	cout << "Max : " << t1.getMax(5,9,7) << "  Min : " << t1.getMin(5,9,7) << "Sum :" << t1.sum() <<"Avg :" << t1.average() <<endl;
	return 0;
}
