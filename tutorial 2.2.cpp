#include<iostream>

using namespace std;

class Vehicle{
	
	public :
		Vehicle(){
			
			cout << "in vehicle constructor " << endl;
	}
			void display(){
				cout << "members of vehicle"<< endl;
			};
		
	
};

class heavyvehicle : public Vehicle{
	
	HeavyVehicle(){cout<<"In HeavyVehicle constructor"<<endl;} 
    void display(){cout<<"members of HeavyVehicle\n";} 
	
	
	
};

class bus : public heavyvehicle{
	
	public :
		bus(){
			cout << "in bus constructor"<< endl;
		}
		
		void display(){cout<<"members of bus\n";} 
	
};


int main(){
	
	bus bus1,bus2;
	
	bus1.display();
	bus2.display();
	
	
	
}
