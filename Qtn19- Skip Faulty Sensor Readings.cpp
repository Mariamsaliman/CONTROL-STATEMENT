#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float reading, sum = 0, average;
	int validCount = 0;
	cout<<"Enter 12 sensor readings:";
	
	for(int i=1; i<=12; i++){
		cout<<"Reading"<<i<<":";
		cin>>reading;
		
		if(reading ==999){
			cout<<"Faulty sensor value skipped";
			continue;
		}
		sum+= reading;
		validCount++;
	}
	if(validCount>0){
		average = sum / validCount;
		cout<<"Average of valid readings="<<average<<endl;
		cout<<"Number of valid readinds="<<validCount<<endl;
	}
	else{
		cout<<"No valid readings entered";
	}
	return 0;
}
