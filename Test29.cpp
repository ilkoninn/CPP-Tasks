#include <iostream>
using namespace std;

int main(){
	
	int n, a, b, c, d;
	cin>>n;
	
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	
	if(n == (a*a*a + b*b*b + c*c*c)) cout<<"YES";
	else cout<<"NO";
	
	
	
	return 0;
}