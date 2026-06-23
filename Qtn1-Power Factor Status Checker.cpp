#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float powerfactor;
	cout<<"Enter powerfactor:";
	cin>>powerfactor;
	
	if(powerfactor<=0.00){
		cout<<"Invalid";
	}
    else if(powerfactor<=0.50){
    	cout<<"Poor";
	}
	else if(powerfactor<=0.80){
		cout<<"Fair";
	}
	else if(powerfactor<=0.95){
		cout<<"Good";
	}
	else{
		cout<<"Excellent";
	}
	return 0;
}
