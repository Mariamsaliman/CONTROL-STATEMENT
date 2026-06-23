#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double temperature;
    
    cout << "Enter motor temperature readings in °C:"<<endl;
    cout << "Test stops when temperature exceeds 90°C"<<endl;
    
    cout << "Temperature: ";
    cin >> temperature;
    
    while (temperature <= 90) {
        cout << "Temperature acceptable."<<endl;
        
        cout << "Temperature: "<<endl;
        cin >> temperature;
    }
    
    
    cout << "\nMotor temperature unsafe. Stop motor test.";

	return 0;
}
