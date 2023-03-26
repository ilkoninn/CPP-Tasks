#include <iostream>
using namespace std;

int main(){
	
	int n, a, b, c, d;
	cin>>n;
	
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	
	if((a == 3 && b == 7) || (b == 3 && c == 3) || (c == 3 && d == 7)) cout<<"YES";
	else cout<<"NO";
	
	
	
	return 0;
}