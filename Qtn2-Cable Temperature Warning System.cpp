#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float temperature;
	cout<<"Enter temperature:";
	cin>>temperature;
	
	if(temperature<=70){
		cout<<"Cable overheating detected";
	}
	else{
		cout<<"Cable temperature is within safe range";
	}
	return 0;
}
