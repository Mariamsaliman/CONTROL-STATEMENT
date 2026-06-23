#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double line1, line2, line3, average;
    
    cout << "Enter current readings for 6 sets of 3-phase system:"<<endl;
    
    for (int set = 1; set <= 6; set++) {
        cout << "Set " << set << ":";
        
        cout << "Line 1 current (A): "<<endl;
        cin >> line1;
        
        cout << "Line 2 current (A): "<<endl;
        cin >> line2;
        
        cout << "Line 3 current (A): "<<endl;
        cin >> line3;
        
        average = (line1 + line2 + line3) / 3.0;
        cout << "Average current for Set " << set << " = " << average << " A";
    }

	return 0;
}
