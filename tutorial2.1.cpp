#include<iostream>

using namespace std;
class Shape{


 protected: 

 float width, height; 
 public: 
 
  void set_data (float a, float b)  { 
    width = a;
	 height = b;  
    
	} 
	
//	Shape(int awidth , int aheight){
		
//		width = awidth;
//		height = aheight;
		
//	}
	};
	
	class triangle :public Shape {
		
		 private :
		 	
		 	int area(){
		 		
		 		return ((width*height)/2);
			 }
			 
		public :
		
		float disarea(){
			cout << area()<< endl;
		}	 
		
	};
	
		class rectangle  : public Shape {
		
		 private :
		 	
		 	float area(){
		 		
		 	
		 		
		 		return (width*height);
			 }
			 
		public :
		 void disarea(){
		 	cout << area() << endl;
		 }	 
		
	};
	
	
	int main(){
		
		rectangle rec;
		triangle tri;
		
		rec.set_data(5,3);
		tri.set_data(2,4);
		rec.disarea();
		tri.disarea();
		
		
		 
		return 0;
	}
