#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    
    double loan, interestrate, payment, prevbalance, interest, total, newbalance;
    int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interestrate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	
	prevbalance = loan;
	while (prevbalance > 0){
	    interest = prevbalance * (interestrate/100);
	    total = prevbalance + interest;
	    
	    if (total < payment){
	        payment = total;
	    }
	    newbalance = total - payment;
	    
	cout << setw(13) << left << year; 
	cout << setw(13) << left << prevbalance; 
	cout << setw(13) << left << interest; 
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newbalance;
	cout << "\n";	
	    prevbalance = newbalance;
	    year++;
	}
	
	return 0;
}
