#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	 double voltage;
    
    cout << "Enter solar panel voltage readings in V:"<<endl;
    cout << "Tracking stops when voltage drops below 18V"<<endl;
    
    cout << "Voltage: ";
    cin >> voltage;
    
    
    while (voltage >= 18) {
        cout << "Solar panel voltage acceptable."<<endl;
        
        cout << "Voltage: ";
        cin >> voltage;
    }
    
    
    cout << "Low voltage detected. Stop solar panel tracking.";
	return 0;
}
