#include <isotream>
using namespace std;

int main(){
	
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	
	int max;
	max = a;
	if(max < b) max = b;
	if(max < c) max = c;
	if(max < d) max = d;
	
	if(a >= b && b >= c && c >= d){
		a = max;
		b = max;
		c = max;
		d = max;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<;
	}
	else if(d > c && c > b && b > a){
		cout<<a<<" "<<b<<" "<<c<<" "<<d;
	}
	else{
		cout<<a*a<<" "<<b*b<<" "<<c*c<<" "<<d*d;
	}
	
	
	
	return 0;
}