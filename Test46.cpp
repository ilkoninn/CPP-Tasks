#include <iostream>
using namespace std;

int main(){
	
    int n, count = 1, result = 0;
    cout<<"Please, Enter your number:\nn = ";
    cin>>n;

    while(n){
    	
    	
    	result = result + (n % 10) * count;
    	count = count * 10;
    		
    	n /= 10;
    }
	
	cout<<result;
	
	
	return 0;
}