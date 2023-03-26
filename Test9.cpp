#include <iostream>
using namespace std;

int main(){
	
	int n, a, b;
	cin>>n;
	
	a = n / 10 % 10;
	b = n % 10;
	
	cout<<b<<a;
	
	return 0;
}