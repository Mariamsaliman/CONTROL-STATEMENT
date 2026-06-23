#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int choice;
	cout<<"Fuse selection menu:"<<endl;
	cout<<"1. 5A Fuse"<<endl;
	cout<<"2. 10A Fuse"<<endl;
	cout<<"3. 13A Fuse"<<endl;
	cout<<"4. 20A Fuse"<<endl;
	cout<<"5. 32A Fuse"<<endl;
	cout<<"Enter your choice (1-5):";
	
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"5A Fuse selected"<<endl;
	        cout<<"Suitable application: lighting circuits, small electronics, alarm systems";
	        break;
	    case 2:
	    	cout<<"10A Fuse selected"<<endl;
	    	cout<<"Suitable application: Socket outlets, small applicances, TV, radio";
	        break;
	    case 3:
	    	cout<<"13A Fuse selected"<<endl;
	    	cout<<"Suitable application: Standard UK 3-pins plug sockets, kettles, toasters";
	        break;
	    case 4:
	    	cout<<"20A Fuse selected"<<endl;
	    	cout<<"Suitable application: Water heaters, heavy duty equipment, air conditoiners";
	        break;
	    case 5:
	    	cout<<"32A Fuse selected"<<endl;
	    	cout<<"Suitable application: Cookers, ovens, main circuits, high power loads";
	        break;
	    default:
	    	cout<<"Invalid choice!Please select 1-5";
	}
	return 0;
}
