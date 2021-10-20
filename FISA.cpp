

#include<iostream>
using namespace std;
int main(){
<<<<<<< HEAD
cout<<"sdsada";	

	int n;
	int a=0;
	int k;
	cin>>n;
	for(int i=1; i<n; i++){
		
		for(int j=1 ; j<n; j++){
			k=n-i-j;
			if(k*k==(i*i)+(j*j)){
				
				cout<<i<<" "<<j<<" "<<k;
				a=1;
				}
	
				if(a==1)
				break;
			}
	
	}

	if(a==0){
		cout<<"Impossible";
	}
	cout<<"ADAD";
}
