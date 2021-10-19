#include<iostream>
using namespace std;

long fact(double x)
{
	if(x==1)
	return 1;
	else
	return(x*fact(x-1));
	

	}

int permutation(double n , double k){
	int s=1;
	if(n==0)
	return 1;
	else
	for(int i=1;i<=n;i++){
		s*=k;
		k--;
	}
	return s/fact(n);

}
int main(){
	double m;
	double s;
	cin>>s;
	cin>>m;

	cout<<permutation(s , m);
}

void khayam(int y){
	for(int t=0;t<y;y++){
		for(int d=0;d<=t;d++){
			cout<<permutation(d , t)<<" ";
		}
		cout<<endl;
		}
		
int main()
{
	int z;
	cin>>z;
	cout<<khayam(z);
}		

