#include<iostream>
using namespace std;
int main(){
  int a=0;
  long n;
  int counter;
  cin>>n;
 int c[n];
 for(int i=0; i<n; i++){
  cin>>c[i];}
   counter=0;
 for(int j=0; j<n ;j++){
  counter=0;
  
  for(int k=0; k<n; k++){
   if(c[j]==c[k])
   counter++;}
   if(counter>n/2)
   cout<<c[j];
   a=1;
   break;}
   if(a==0)
   cout<<"None"; 
 }
