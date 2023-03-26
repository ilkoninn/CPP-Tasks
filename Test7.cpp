#include <iostream>
using namespace std;

int main(){
	
	int n, a, b;
	cin>>n;
	
	a = n / 10;
	b = n % 10;
	
	cout<<b*10 + a;
	
	return 0;
}