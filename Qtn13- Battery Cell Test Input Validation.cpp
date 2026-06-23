#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int rating;
    
    cout << "Enter battery cell ratings 1 to 5:"<<endl;
    cout << "Enter 0 to stop"<<endl;
    
    do {
        cout << "Rating: ";
        cin >> rating;
        

        if (rating >= 1 && rating <= 5) {
            cout << "Valid rating accepted."<<endl;
        } else if (rating != 0) {
            cout << "Invalid input. Try again."<<endl;
        }
        
    } while (rating != 0);
    
    cout << "\nBattery test ended.";

	return 0;
}
