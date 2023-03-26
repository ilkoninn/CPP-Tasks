#include <isotream>
#include <cmath>
using namespace std;

int main(){
	
	int a, b, c;
	cin>>a>>b>>c;
	
	if(c > (a - b) && c < sqrt(a*a + b*b)) cout<<"Itibucaqli";
	else if(c > sqrt(a*a + b*b) && c < a + b) cout<<"Korbucaqli";
	else if(c == sqrt(a*a + b*b)) cout<<"Duzbucaqli";
	else printf("This triangle doesn't exist");
	
	
	return 0;
}