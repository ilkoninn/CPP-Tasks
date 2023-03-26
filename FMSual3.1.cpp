#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	
	int l = n, say = 0;
	while(l){
		l /= 10;
		say++;
	}
	
	int a[say], b[say], i;
	for(i = 0; i < say; i++){
		a[i] = n % 10;
		n /= 10;
	}
	
	
	
	return 0;
}