#include <iostream>
using namespace std;

int main(){
	bool p = true;
	
	while(p){
		long long n;
		
		cout<<"Please, Enter your number:\nn = ";
		cin>>n;
		cout<<endl;
		
		long long l = n, q;
		
		long long r, S = 0, say = 0, max = -10;
		long long min = 10, H = 1, cut = 0, tek = 0;
		long long cut_say = 0, tek_say = 0, sade_cem = 0, sade_say = 0;
		
		bool prime = true;
		int i, k;
		
		while(n){
			r = n % 10;
			
			/*The Number of even numerals*/
			if(r % 2 == 0){
				cut += r;
				cut_say++;
			}
			
			/*The Number of odd numerals*/
			if(r % 2 != 0){
				tek += r;
				tek_say++;
			} 
			
			/*Find the simple numerals*/
			if(r == 0 or r == 1) prime = false;
			
			for(i = 2; i <= r; i++){
				prime =  true;
				
				for(k = 2; k*k <= i; k++){
					if(i % k == 0){
						prime = false;
						break;
					}
				}
			}
			
			if(prime){
				sade_cem += r;
				sade_say++;
			}
			
			/*The Sum of the numerals*/
			S += r;
			
			/*The Product of numerals*/
			H *= r;
			
			/*The Number of numerals*/
			say++;
			
			n /= 10;
		}
		
		while(l){
			q = l % 10;
			
			if(max < q) max = q;
			if(min > q) min = q;
			
			l /= 10;
		}
		
		cout<<"The Sum of the numerals: "<<S<<endl<<endl;
		
		cout<<"The Number of numerals: "<<say<<endl<<endl;
		
		cout<<"The Max Number of numerals: "<<max<<endl<<endl;
		
		cout<<"The Min Number of numerals: "<<min<<endl<<endl;
		
		cout<<"The Product of numerals: "<<H<<endl<<endl;
		
		cout<<"The Sum of even numerals: "<<cut<<endl<<endl;
		
		cout<<"The Sum of odd numerals: "<<tek<<endl<<endl;
		
		cout<<"The Number of even numerals: "<<cut_say<<endl<<endl;
		
		cout<<"The Number of odd numerals: "<<tek_say<<endl<<endl;
		
		cout<<"The Sum of simple numerals: "<<sade_cem<<endl<<endl;
		
		cout<<"The Number of simple numerals: "<<sade_say;
		way:
		cout<<"\n\n\nDo you want enter other number:(Yes, No) \nAnswer: ";
		
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