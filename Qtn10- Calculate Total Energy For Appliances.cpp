#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double power, time, energy, totalEnergy = 0;
    
    cout << "Enter power rating and usage time for 8 appliances:"<<endl;
    
    for (int i = 1; i <= 8; i++) {
        cout << "Appliance " << i << ":"<<endl;
        
        cout << "Power rating (W): "<<endl;
        cin >> power;
        
        cout << "Usage time (hours): "<<endl;
        cin >> time;
        
        energy = power * time;  
        cout << "Energy consumed = " << energy << " Wh"<<endl;
        
        totalEnergy += energy;  
    }
    
    cout << "\n\nTotal energy consumed by all appliances = " << totalEnergy << " Wh";
	return 0;
}
