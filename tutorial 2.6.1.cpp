#include<iostream>

class A{
	public:
	A(){
	std::cout<<"in constructor A\n";			
	}
	
	~A(){
	std::cout<<"in distructor A\n";			
	}
	
};

class B{
	public:

	B(){
	std::cout<<"in constructor B\n";			
	}
	
	~B(){
	std::cout<<"in distructor B\n";			
	}
	
};

class C :public A,public B{
	public :
	C(){
	std::cout<<"in constructor C\n";			
	}
	
	~C(){
	std::cout<<"in distructor C\n";			
	}
	
};


int main(){
	
	A ob1,ob2;
	return 0;
}



