#include <iostream>
using namespace std;

int main(){
	
	int n, a, b, c, d;
	cin>>n;
	
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	
	if(a == d and b == c){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}