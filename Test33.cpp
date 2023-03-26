#include <iostream>
using namespace std;

int main(){
	
	int x, y, z;
	cin>>x>>y>>z;
	
	int min = x;
	if(min > y) min = y;
	if(min > z) min = z;
	
	
	cout<<min;
	
	
	return 0;
}