#include<iostream>

using namespace std;

class circle{
	
	private : 
			int radius;
			float area(void){
				return(3.14*radius*radius);
			}
	
	public :
			int colour;
			circle(int r){
				radius = r;
				colour = 0;
				
			}
			void setr(int r){
				radius = r;colour =255;
			}
			void setr(int r,int c){
				radius = r;colour = c;
			}
			int getr(void){
				return(radius);
			}
			void displayarea(void){
				cout << "area is " << area();
			}
}

int main(){
	
	circle ob1,ob2;
	circle mycircle;
	mycircle.setr(10);
	mycircle.getr();
	mycircle.setr(20);
	mycircle.getr();
	mycircle.setr(40,100);
	mycircle.displayarea();
	return 0;
	
}