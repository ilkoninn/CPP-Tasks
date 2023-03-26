#include <iostream>
using namespace std;

int main(){
	
	int n, a, b, c, d;
	cin>>n;
	
	a = n / 10000;
	b = n / 1000 % 10;
	c = n / 100 % 10;
	d = n / 10 % 10;
	e = n % 10;
	
	cout<<(a + b) - (d + e);
	
	return 0;
}