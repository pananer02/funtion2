#include <iostream>
#include <string>
using namespace std;
float update_balance(int choose,float &balance,float money){
	if(choose == 1){
		balance -= money;
	}
	else if(choose == 2){
		balance += money;
	}
	return (balance);
}
int main(){
	float balance = 10000;
	int choose;
	float money;
	cout << "Exit with 0" << endl;
	cout <<	"Your balance = " << balance << endl;
	do{
		cout << "Input command ( 1 or withdraw , 2 deposit) : ";
		cin >> choose;
		if(choose == 0){
				cout << "Exit Program....." << endl;
				return 0;
		}
		cout << "Input amount = ";
		cin >> money;
		cout << "Your balance = " << update_balance(choose,balance,money) << endl;
	}while(choose != 0);
	return 0;
}