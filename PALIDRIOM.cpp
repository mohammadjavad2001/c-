#include<iostream>
#include<math.h>
using namespace std;
		long changetoten(int number,int n){
		
	
		  int r=0,i=1;

          long result=0;

 

       for(int i=0; number!=0;i++){
       	r = number%10;
       	result+=r*(pow(n,i));
       	number=number/10;
	   }}
	   long changetoc(long number,int z){
	   			  int r=0,i=1;

          long result=0;

 

       for(int i=0; number!=0;i++){
       	r = number%z;
       	result+=r*(pow(10,i));
       	number=number/z;
	   }
	   return result;
	   }
	   bool palidriom(long number){
	   	int save=number;
	   	int j;
	   	bool g=true;
	   	int result;
	   	int a=0;
	   	while( number!=0){
	   		j++;
		   		number=number/10;}
		   		j--;
		while(number>=10){
			a=number%10;
			number/=10;
			result+=a*(pow(10,j));
			j--;
			
			}
			if(result==save)
			g=true;
			else
			g=false;
			return g;}
		
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	long y=changetoten(a,b);
	long x=changetoc(y,c);
	if(palidriom(x))
	cout<<"YES";
	else
	cout<<"NO";
	
}



