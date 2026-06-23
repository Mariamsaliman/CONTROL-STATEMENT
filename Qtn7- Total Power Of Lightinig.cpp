#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double wattage, totalPower = 0;
    
    cout << "Enter wattage for 12 lighting points in watts:";
    
    for (int i = 1; i <= 12; i++) {
        cout << "Lighting point " << i << ": "<<endl;
        cin >> wattage;
        totalPower += wattage; 
    }
    
    cout << "Total lighting load = " << totalPower << " watts";
    
	return 0;
}
