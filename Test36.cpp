#include <iostream>
using namespace std;

int main(){
	
	float x, y;
	cin>>x>>y;
	
	if(x < y || x == y) cout<<0<<" "<<y;
	else cout<<x<<" "<<y;
	
	
	return 0;
}