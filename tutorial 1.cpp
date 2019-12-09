#include <iostream>

using namespace std;

class Count {
	
	public :
		
		int count; 
		
		int increment(int count){
			count = count +1;
			return count;	
		}
		
			int decrement(int count){
			count = count - 1;
			return count;	
		}
		
			int reset(int x){
			count = x;
			return count;	
		}
	
	
		int aincrement(int k = 1){
			count = count +k;
			return count;	
		}
		
			int adecrement(int k = 1){
			count = count - k;
			return count;	
		}
		
			int areset(int k=1){
			count = k;
			return count;	
		}
	
};
	
int main(){
	
		Count  y;	
		cin >> y.count;	
		cout << y.increment(y.count) << "\n";
		cout << y.decrement(y.count) << "\n";
    
    	int j;
    	cin >> j ;
    	cout << y.aincrement(j);              	
	
	return 0;
	
	
}

