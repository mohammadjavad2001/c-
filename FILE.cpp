#include<iostream>
#include<math.h>
#include<fstream>
#include<string.h>

using namespace std;
int main(){
	ofstream output;
	output.open("hello.txt",ios::app);
	if(!output.is_open()){
		cout<<"ERROR";
		
	}
	string s;
	getline(cin,s);
	output<<s;
	output.close();
	ifstream in;
	in.open("hello.txt",ios::app);
	if(!in.is_open()){
		cout<<"ERROR";
		
	}
	string a;
	while(getline(in,a)){
	

	cout<<a;}
	in.close();
	
}
