#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    double voltage, current, power;
    char choice;
    
    cout << "DC Power Calculator: P = V x I"<<endl;
    
    do {
        cout << "Enter voltage (V): "<<endl;
        cin >> voltage;
        
        cout << "Enter current (A): ";
        cin >> current;
        
        power = voltage * current;
        cout << "Power = " << power << " watts"<<endl;
        
        cout << "Perform another calculation? Enter Y to continue, N to stop: ";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y'); 
    
    cout << "DC Power calculator ended.";
	return 0;
}
