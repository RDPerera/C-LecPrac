#include<iostream>

using namespace std;

class alpha{
	
	private :
		int data;
	public :
		alpha(){	//why is this here? explain
		}
		
		alpha(int d){
			data = d;
		}
		
	void display(){
		std :: cout << data; // what is :: means
	}	
	
	alpha & operator = (alpha & a){  // i dont get this whole function
		
		data = a.data;
		std :: cout << "assignment operator invoked";
		return *this; // wtf is this
	}

	
			
};

int main(){
	
	alpha a1(37),a2,a3;
	
	a3=a2=a1;
	
	std:: cout << "\n a2 ="; a2.display();
	std:: cout << "\n a3 ="; a3.display();	
}
