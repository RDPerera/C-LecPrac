#include<iostream>
using namespace std;


class Stack{
	
	private:
		int array[27];
		int top;
	public :
	
	 	Stack(int aarray[27] , int atop){
	 		
	 		array[27] = aarray[27];
	 		top = atop;
	 			 	
		 }	
		 
		 void load_stack(){
		 Stack aarray[27];
		 int atop =0 ;
		 char k= 'a';
		 while(atop != 26){
		 	
		 	aarray[atop] = k;
		 	atop++;
		 	k++;
		 }
		 	
		 }	
		 
		 	 void show_stack(char aarray[27]){
		 	
		 	int atop = 0;
		 	while( aarray[atop] != 27 )
		 		cout << aarray[atop] << "\t";
			 }
			 
			 
			 char pop(){
			 	int atop;
			 	if(atop == -1){
			 		cout << "stack is empty" << "\n";
			 	
				 }
			 	 else{
				
			 	 return aarray[atop];
			 	 atop--;
			 	   }
			 	 
			 }
			 
			  void push(char x){
			 	int atop;
			 	char aarray[27];
			 	if(atop == 26){
			 		cout << "stack is overflow" << "\n";
				 }
			 	 else{
					
					aarray[top] = x;
					top++;
			 	
			 	   }
			 	 
			 }
		 	
		 	
		 
};


int main(){
	
	Stack stack1;
	stack1.load_stack();
	stack1.pop();
	stack1.push('*');
	stack1.show_stack(stack1);

		
	
	
}


