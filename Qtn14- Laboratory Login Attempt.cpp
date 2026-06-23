#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string code;
    int attempts = 0;
    const string correctCode = "BEE208";
    
    cout << "Laboratory Access System"<<endl;
    
    while (attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> code;
        
        if (code == correctCode) {
            cout << "Access granted.";
            return 0;  
        } else {
            attempts++;
            cout << "Incorrect code. Attempts left: " << (3 - attempts) << endl;
        }
    }
    
    
    cout << "Access denied. Maximum attempts reached.";

	return 0;
}
