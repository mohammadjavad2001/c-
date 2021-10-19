#include<iostream>
using namespace std;
int main()
{
	int k;
	int n;
	cin>>n;
	cin>>k;
	
	
	
	int s=1;
	if(n==0)
	return 1;
	else
	for(int i=1;i<=n;i++){
		s*=k;
		k--;
		cout<<s;
	}
	}
