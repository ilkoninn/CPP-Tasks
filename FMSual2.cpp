#include<iostream>
#include<cstring>
using namespace std;

int main(){
	bool p = true;
	
	while(p){
		long long n, k = 1;
	    cout<<"Please, Enter your number:\nn = ";
	    cin>>n;
	
	    int c=0, l=n;
	    while(l){
     		c++;
    		l/=10;
    	}
    	
	    int *m = new int[c];
	
	    for(int i = 0; i < c; i++){
	    	m[i] = n % 10;
    		n /= 10;
    	}
	
    	// m[0] = 1, m[1] = 2, m[2] = 3 ...
	
    	for(int i = 0; i < c; i++){
    		for(int j = i + 1; j < c; j++){
    			if(m[i] == m[j]){
			    	k++;
     			}
    		}	
    	}
	
    	// m[0] == m[1], m[1] == m[2], m[2] == m[3] ... , k = 1, 2, 3 ...
	
    	if(k > 1){
    		cout<<"Yes";
    	}
    	else{
    		cout<<"No";
    	}
	
	
    	delete[]m;
    	
    	way:
		cout<<"\n\n\nDo you want enter different number:(Yes, No) \nAnswer: ";
		
		string u;
		cin>>u;
		
		if (u == "Yes"){
			p = true;
		}
		else if (u == "No"){
			p = false;
		}
		else{
			cout<<"Please, enter correct variant!";
			goto way;
		}
	}
	
	
	return 0;
}
