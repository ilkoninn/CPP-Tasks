#include <iostream>
using namespace std;

int main(){
	
	int x, y, z;
	cin>>x>>y>>z;
	
	int max = x;
	if(max < y) max = y;
	if(max < z) max = z;
	
	
	cout<<max;
	
	
	return 0;
}