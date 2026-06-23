#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int choice;
	float value, result;
	cout<<"Measurement unit conversion menu:";
	cout<<"1. Convert volts to millivolts"<<endl;
	cout<<"2. Convert amperes to milliamperes"<<endl;
	cout<<"3. Convert kilowatts to watts"<<endl;
	cout<<"4. Convert ohms to kilo-ohms"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	cout<<"Enter value:";
	cin>>value;
	
	switch(choice){
		case 1:
			result= value * 1000;
			cout<<"value="<<value<<result<<"mV";
			break;
		case 2:
			result= value * 1000;
			cout<<"value="<<value<<result<<"mA";
			break;
		case 3:
			result= value * 1000;
			cout<<"value="<<value<<result<<"W";
			break;
		case 4:
			result= value * 1000;
			cout<<"value="<<value<<result<<"k-ohms";
			break;
		default:
			cout<<"Invalid choice! Please select 1-4";
	}
	return 0;
}
