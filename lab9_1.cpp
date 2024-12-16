#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double lona, IRPPY,PPY;
	cout << "Enter initial loan: ";
	cin >> lona;
	cout << "Enter interest rate per year (%): ";
	cin >> IRPPY;
	cout << "Enter amount you can pay per year: ";
	cin >> PPY;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";
	cout << fixed << setprecision(2); 
	int year = 1;
	while(lona > 0){
	double charge = lona * (IRPPY / 100);
	double total = lona + charge;
	double paid;
	if(total < PPY){
	    paid = total;
	}else{
	    paid = PPY;
	}
	double balance = total - paid;
    cout << setw(13) << left << year;
    cout << setw(13) << left << lona;
    cout << setw(13) << left << charge;
    cout << setw(13) << left << total ;
    cout << setw(13) << left << paid;
    cout << setw(13) << left << balance;
    cout << "\n";	
    lona = balance;
    year++;
	}
	return 0;
}
