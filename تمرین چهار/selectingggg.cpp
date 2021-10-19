#include<iostream>
using namespace std;

double fact(double x)
{
	if(x==1)
		return 1;
	else
		return x * fact(x - 1);
	}
double facting(double x, double y)
{
	if (x <= y)
		return 1;
	else
		return x * facting(x - 1, y);
	}
double permutation(double n , double k , double y){
	return facting(n, y)/fact(k);

}
int main(){
	double m, s;
	
	cin>>s>>m;
	
	const double y = m - s;
	
	cout<<permutation(s , m, y);
}
