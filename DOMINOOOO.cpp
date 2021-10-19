#include<iostream>
using namespace std;
int main(){
	int n,m;
	int counter=0;
	int counter1=0;
	int counter2=0;
	cin>>n>>m;
	char a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		counter1=0;
		for(int j=0; j<m-1; j++){
			if((a[i][j]=='|')&&(a[i][j++]=='-')){
				counter1++;
				
			}
		}
			if(counter1==0){
			
			counter1++;}
			counter+=counter1;
		}


	for(int j=0; j<m; j++){
		counter2=0;
		for(int i=0; i<n-1; i++){
			if((a[i][j]=='-')&&(a[i++][j]=='|')){
				counter2++;
			}}
			if(counter2==0){
			
			counter2++;}
			counter+=counter2;
		}

	cout<<counter;	
 		
 


}
