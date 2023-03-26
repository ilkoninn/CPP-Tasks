#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int n, a;
	cin>>n;
	
	a = (int)sqrt(n + 0.5);
	
	if(a*a == n) cout<<"YES";
	else cout<<"NO";	
	
	return 0;
}