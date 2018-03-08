#include <iostream>

using namespace std;
void FindNickels (int Num3){
	int Nickels = Num3 / 5;
	int Nvalue = Nickels * 5;
	int Num4 = Num3 - Nvalue;
	
	cout << "You have " << Nickels << " Nickels" << endl;
	cout << "You have " << Num4 << " Pennies" << endl;
}

void FindDimes (int Num2){
	int Dimes = Num2 / 10;
	int Dvalue = Dimes * 10;
	int Num3 = Num2 - Dvalue;
	
	cout << "You have " << Dimes << " Dimes" << endl;
	FindNickels(Num3);
}

void FindQuarters(int Num1) {
	int Quarters = Num1 / 25;
	int Qvalue = Quarters * 25; 
	int Num2 = Num1 - Qvalue;
	
	cout << "You have " << Quarters << " Quarters" << endl;
	FindDimes(Num2);

}

int main(){

	int Num1 = 0;
	
	
		cout << "Please enter a number: ";
		cin >> Num1;
		
		cout << "You start with " << Num1 << " Cents" << endl;
		FindQuarters(Num1);
	
}




