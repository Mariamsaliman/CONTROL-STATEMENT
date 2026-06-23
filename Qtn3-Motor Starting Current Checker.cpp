#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float current;
	cout<<"Enter current:";
	cin>>current;
	
	if(current<=3){
		cout<<"High starting";
	}
	else{
		cout<<"Starting current is acceptable";
	}
	return 0;
}
