#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N,int M)
{
    if(N<=0 || M<=0){
        cout << "Invalid input";
    }else if(N>0){
        int i = 0;
        while(i<N){
            if(M>0){
                int j=0;
                while(j<M){
                    cout << "O";
                    j++;
                }
                cout <<"\n";
            }
            i++;
        }
    }
    
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
