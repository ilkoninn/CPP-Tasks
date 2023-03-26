#include <iostream>
using namespace std;

int main(){
	
	int n, a, b, c, d, e;
	cin>>n;
	
	a = n / 10000;
	b = n / 1000 % 10;
	c = n / 100 % 10;
	d = n / 10 % 10;
	e = n % 10;
	
	if((a==b and a==c and a!=d) or (a==b and a!=c and a==d) or (a!=b and a==c and a==d) or (a!=b and b==c and b==d)) cout<<"YES";
	else cout<<"NO";
	
	
	return 0;
}