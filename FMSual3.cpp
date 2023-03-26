#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	bool p = true;
	
	while(p){
		
		cout<<"Choose your language: (AZ, ENG, RU, TR)"<<endl;
    	cout<<"Answer: ";
    	string u;
    	cin>>u;
	
    	cout<<endl;
	
    	if(u == "AZ"){
		
	    	cout<<"Zehmet olmasa, Istediyiniz reqemi daxil edin:\nn = ";
    		long long n;
        	cin>>n;
        	
			long long l=n;
        	int i, c=0, say=0;
          	
			while(l!=0){
          		c++;
         		l/=10;
        	}
           	
			int *a=new int[c];
          	
			for(i=0;i<c;i++){
         		a[i]=n%10;
          		n/=10;
        	}
	        
			sort(a, a+c, greater<int>());
         	
			for(i=0;i<c;i++){
	        	if(a[i]!=a[i+1]){
         			say++;
     	    	}
            }
		
	    	cout<<"\nMuxtelif reqemlerin sayi: "<<say;
    	}
    	else if(u == "ENG"){
	    	
			cout<<"Please, Enter a number:\nn = ";
    		long long n;
        	cin>>n;
        	
			long long l=n;
        	int i, c=0, say=0;
          	
			while(l!=0){
          		c++;
         		l/=10;
        	}
           	
			int *a=new int[c];
          	
			for(i=0;i<c;i++){
         		a[i]=n%10;
          		n/=10;
        	}
	        
			sort(a, a+c, greater<int>());
         	
			for(i=0;i<c;i++){
	        	if(a[i]!=a[i+1]){
         			say++;
     	    	}
            }
           
		   cout<<"Number of different numerals: "<<say;
	   }
	    else if(u == "RU"){
	    	cout<<"Pajalusta, vedite nomr:\nn = ";
   	    	long long n;
        	cin>>n;
        	
			long long l=n;
        	int i, c=0, say=0;
          	
			while(l!=0){
          		c++;
         		l/=10;
        	}
           	
			int *a=new int[c];
          	
			for(i=0;i<c;i++){
         		a[i]=n%10;
          		n/=10;
        	}
	        
			sort(a, a+c, greater<int>());
         	
			for(i=0;i<c;i++){
	        	if(a[i]!=a[i+1]){
         			say++;
     	    	}
            }
		    
			cout<<"\nKolicestvo razlicnix castiy: "<<say;
	    }
	    else if(u == "TR"){
	    	
	    	cout<<"Lutfen, istediginiz numarayi giriniz:\nn = ";
    		long long n;
        	cin>>n;
        	
        	long long l=n;
        	int i, c=0, say=0;
          	
			while(l!=0){
          		c++;
         		l/=10;
        	}
           	
			int *a=new int[c];
          	
			for(i=0;i<c;i++){
         		a[i]=n%10;
          		n/=10;
        	}
	        
			sort(a, a+c, greater<int>());
         	
			for(i=0;i<c;i++){
	        	if(a[i]!=a[i+1]){
         			say++;
     	    	}
            }
		
	    	cout<<"\nFarkli basamak sayisi: "<<say;
		}
		
		way:
		cout<<"\n\n\nDo you want enter other number:(Yes, No) \nAnswer: ";
		
		string b;
		cin>>b;
		
		if (b == "Yes"){
			p = true;
		}
		else if (b == "No"){
			p = false;
		}
		else{
			cout<<"Please, enter correct variant!";
			goto way;
		}
		
	}
	
	
	
	
	return 0;
}