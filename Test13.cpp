#include <iostream>
using namespace std;

int main(){
	
	int n, a, b, c;
	cin>>n;
	
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	
	cout<<c*100 + a*10 + b;
	
	return 0;
}