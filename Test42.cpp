#include <isotream>
#include <cmath>
using namespace std;

int main(){
	
	float x, y;
	cin>>x>>y;
	
	if(x < 0 && y < 0) cout<<sqrt(x*x)<<" "<<sqrt(y*y);
	else if(x < 0 || y < 0) cout<<x + 0.5<<" "<<y + 0.5;
	else if((x > 0 && y > 0) && ((x < 0.5 && y > 2.0) || (y < 0.5 && x > 2.0))) cout<<x / 10<<" "<<y / 10;
	else cout<<x<<" "<<y;
	
	
	return 0;
}