#include<iostream>
#include<string>
using namespace std;
int main(){
    int age,h,p;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> h;
        if(h<160){
        	cout << "Your status = UNFRIEND";
		}else if (h<175){
			cout << "Your status = FRIEND";
		}else {
        cout <<"Enter your property: ";
        cin >> p;
        	cout << "Your status = " << (p>69e6 ? "MARRIED" :"ONE-NIGHT-STAND");
		}
    }else if(age <30){
    	cout <<"Enter your property: ";
        cin >> p;
        cout << "Your status = " << (p>10e6 ? "BEST FRIEND" :"UNFRIEND");
	}else{
		cout << "Your status = UNFRIEND";
	}
    }
