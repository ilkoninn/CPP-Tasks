#include <iostream>
using namespace std;

int main(){
	
	int a, b, n;
	cin>>n;
	
	a = n / 10;
	b = n % 10;
	
	cout<<a+b<<" "<<a*b;
	
	return 0;
}