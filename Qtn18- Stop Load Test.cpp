#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double power, totalLoad = 0;
	cout<<"Enter power ratings for up to 20 appliances in watts:"<<endl;
	cout<<"Test stops if total exceeds 5000W"<<endl;
	
	for(int i=1; i<= 20; i++){
		cout<<"Appliance"<<i<<"power:"<<endl;
		cin>>power;
	     totalLoad += power;
	
	if(totalLoad>5000){
		cout<<"Maximum load exceeded. Stop adding appliances."<<endl;
		break;
	}
	 }
	 cout<<"Final totalLoad="<<totalLoad<<"W"; 
	return 0;
}
