#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	    double voltage, current, resistance;
    char choice;
    
    cout << "Ohm's Law Calculator: R = V / I"<<endl;
    
    do {
        cout << "Enter voltage (V): "<<endl;
        cin >> voltage;
        
        cout << "Enter current (A): ";
        cin >> current;
        
        
        if (current != 0) {
            resistance = voltage / current;
            cout << "Resistance = " << resistance << " ohms"<<endl;
        } else {
            cout << "Error: Current cannot be zero."<<endl;
        }
        
        cout << "Do you want to continue? Enter Y: "<<endl;
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y'); 
    
    cout << "Calculator ended.";

	return 0;
}
