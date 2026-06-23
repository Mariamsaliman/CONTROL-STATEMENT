#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float resistance;
	cout<<"Enter up to 10 insulation resistance readings in megaohm:"<<endl;
	
	for(int i=1; i<=10; i++){
		cout<<"Reading"<<i<<":";
		cin>>resistance;
		
		if(resistance<1.0){
			cout<<"Insulation failure detected. Test stopped";
			break;
		}
		else{
			cout<<"Insulation reading acceptable";
		}
	}
	return 0;
}
