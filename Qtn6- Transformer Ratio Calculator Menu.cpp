#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	 int choice;
	 float primaryTurns, secondaryTurns, primaryVoltage, secondaryVoltage, ratio;
	 cout<<"Transformer ratio calculator menu";
	 cout<<"1. Calculate turns ratio"<<endl;
	 cout<<"2. Calculate secondary voltage"<<endl;
	 cout<<"3. Calculate primary voltage"<<endl;
	 cout<<"Enter your choice (1-3)";
	 cin>>choice;
	 
	 switch(choice){
	 	case 1:
	 		cout<<"Enter primary turns:";
	 		cin>>primaryTurns;
	 		cout<<"Enter secondary turns:";
	 		cin>>secondaryTurns;
	 		ratio= primaryTurns / secondaryTurns;
	 		cout<<"Turns ratio="<<ratio<<":1";
	 		break;
	 	case 2:
	 		cout<<"Enter primary voltage:";
	 		cin>>primaryVoltage;
	 		cout<<"Enter secondary voltage:";
	 		cin>>secondaryVoltage;
	 		secondaryVoltage= primaryVoltage * secondaryTurns / primaryTurns;
			cout<<"secondaryVoltage="<<secondaryVoltage<<"V";
			break;
		case 3:
		    cout<<"Enter secondaryVoltage:";
		    cin>>secondaryVoltage;
			cout<<"Enter primaryTurns:";
			cin>>primaryTurns;
			cout<<"Enter secondaryTurns:";
			cin>>secondaryTurns;
			primaryVoltage= secondaryVoltage * primaryTurns / secondaryTurns;
			cout<<"primaryVoltage="<<primaryVoltage<<"V";
			break;
		default:
		   cout<<"Invalid choice! Please select (1-3) ";   
	 }
	return 0;
}
