#include<iostream>

using namespace std;

class rectangle {
	
	private :	
		int length ;
		int	bredth ;
		
	public :
	
		rectangle(int w,int h){
				length = w;
				bredth = h;
		}	
		
		void setwidth(int w){
			bredth = w;
		}
		
			void setlength(int h ){
			length = h;
		}
		
		~rectangle(){	
		}
		
		int  display(){
			
			int area = length*bredth;
			 return area;
		}
		
	
};

int main(){
	
	rectangle rec;
	rec.setlength(100);
	rec.setwidth(20);
	cout <<	rec.display()<< endl;	
}

