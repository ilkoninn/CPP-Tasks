#include <iostream>
using namespace std;

int main(){
	
	int n, m = 0, a, b, c, d;
	cout<<"Please, Enter your number:\nn = ";
	cin>>n;
	
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	
	if(a % 2 != 0) m = 10*m + a;
	if(b % 2 != 0) m = 10*m + b;
	if(c % 2 != 0) m = 10*m + c;
	if(d % 2 != 0) m = 10*m + d;
	
	cout<<m;
	
	
	return 0;
}