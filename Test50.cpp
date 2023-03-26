#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int n, a, b, c;
	cin>>n;
	
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	
	int max, min, orta;
	
	max = min = orta = a;
	if(max < b) max = b;
	if(max < c) max = c;
	if(min > b) min = b;
	if(min > c) min = c;
	if(min < b && b < max) orta = b;
	if(min < c && c < max) orta = c;
	
	cout<<min<<orta<<max;
 	
	return 0;
}