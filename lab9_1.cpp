#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    
    double loan,rpy,cpy;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rpy;
	cout << "Enter amount you can pay per year: ";
	cin >> cpy;

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
	for(int n=1;loan>0;n++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << n; 
	cout << setw(13) << left << loan;
	double interest = loan*(rpy/100);
	cout << setw(13) << left << interest;
	double total = loan+interest;
	cout << setw(13) << left << total;
	    if(cpy>total){
	        cpy = total;
	    }
	cout << setw(13) << left << cpy;
	cout << setw(13) << left << total-cpy;
	cout << "\n";	
	loan = total-cpy;
	}
	
	return 0;
}