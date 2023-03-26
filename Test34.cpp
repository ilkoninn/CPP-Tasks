#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	
	float x, y, z;
	cin>>x>>y>>z;
	
		
	if(z >= y && y >= x) cout<<x*2<<" "<<y*2<<" "<<z*2;
	else cout<<sqrt(x*x)<<" "<<sqrt(y*y)<<" "<<sqrt(z*z);
	
	
	return 0;
}