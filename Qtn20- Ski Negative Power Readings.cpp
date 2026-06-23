#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float power, total = 0;
	int validCount = 0;
	cout<<"Enter 10 power readings in watts:";
	
	for(int i= 1; i <=10; i++){
		cout<<"Reading"<<i<<":";
		cin>>power;
		
		if(power<0){
			cout<<"Invalid reading skipped";
			continue;
		}
	total += power;
	validCount++;
	}
	   cout<<"Total of valid power readings="<<total<<"W"<<endl;
	   cout<<"Number of valid readings="<<validCount;
	return 0;
}
