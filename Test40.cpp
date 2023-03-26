#include <iostream>
using namespace std;

int main(){
	
	float x, y;
	cin>>x>>y;
	
	float max, min;
	
	min = max = x;
	if(max < y) max = y;
	if(min > y) min = y;
	
	
	if(x < 0) cout<<max;
	else cout<<min;
	
	
	return 0;
}