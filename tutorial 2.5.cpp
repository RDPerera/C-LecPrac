#include<iostream>
using namespace std;


class rectangle{
	
	protected:
		int length;
		int bredth;
		
	public :
		
		rectangle(int w,int h){
			length = w;
			bredth = h;
		}
		~rectangle(){
		}
		
		int  displayarea(){
	   		
			int area = length*bredth;
			return area;	
		}	
};

class newrectangle : public rectangle{
	
	public : 
		newrectangle(){
		}
	
	int setwidth(int w){
		
		width = w;
	}
	
		int setheight(int h){
		
		height = h;
	}
	
	int area(){
		
		int area = height*width;
		return area;
	}
	
};



int main(){
	
//	rectangle rec(10,20);
//	cout <<	rec.displayarea()<< endl;
	rectangle rec1;
	rec1.displayarea();
}
