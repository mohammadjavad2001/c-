#include<iostream>
#include<math.h>
using namespace std;
		long changetoten(long number,int n){
		
	
		  int r=0,i=1;

          long result=0;

 

       for(int i=0; number!=0;i++){
       	r = number%10;
       	result+=r*(pow(n,i));
       	number=number/10;
	   }
	   return result;
	   }
	   long changetoc(long number,int z){
	   			  int r=0,i=1;

          long result=0;

 
			cout<<"WWD";
       for(int i=0; number!=0;i++){
       	r = number%z;
       	result+=r*(pow(10,i));
       	number=number/z;
	   }
	   return result;
	   }
	   	   long palidriom(long number){
	   	int save=number;
	   	int j=0;
	   	bool g=false;
	   	int result=0;
	   	int a=0;
	   	while(number!=0){
	   		j=j+1;
	   		
	   		
		   	number=number/10;}
		   		j--;
		while(save!=0){
			a=save%10;
			save/=10;
			result=result+a*(pow(10,j));
			j--;
			
			}
return result;
}
int main(){
	int a,b,c,y,x,s;
	cin>>a>>b>>c;

	y=changetoten(a,b);
	
	x=changetoc(y,c);

	s=palidriom(x);
	if(s==x)
	cout<<"YES";
	else
	cout<<"NO";

	}


	




