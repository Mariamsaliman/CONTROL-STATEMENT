#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	    int result, passed = 0, failed = 0;
    
    cout << "Enter 15 electronic component test results:"<<endl;
    cout << "Enter 1 for PASS, 0 for FAIL"<<endl;
    
    for (int i = 1; i <= 15; i++) {
        cout << "Component " << i << ": ";
        cin >> result;
        
        
        if (result == 1) {
            passed++;  
        } else {
            failed++;  
        }
    }
    
    cout << "\nNumber of passed components = " << passed<<endl;
    cout << "\nNumber of failed components = " << failed;
    

	return 0;
}
