#include<iostream>
using namespace std;
int main(){
	

	int x;
	cin>>x;
	int n;
	if(x%12==0){
		n=x/12;
		cout<<3*n<<" "<<4*n<<" "<<5*n;
		
	}
		else if(x%30==0){
		n=x/30;
		cout<<5*n<<" "<<12*n<<" "<<13*n;
}
		else if(x%40==0){
		n=x/40;
		cout<<8*n<<" "<<15*n<<" "<<17*n;
}
		else if(x%56==0){
		n=x/56;
		cout<<7*n<<" "<<24*n<<" "<<25*n;
}
		else if(x%70==0){
		n=x/70;
		cout<<20*n<<" "<<21*n<<" "<<29*n;
}
		else if(x%84==0){
		n=x/84;
		cout<<12*n<<" "<<35*n<<" "<<37*n;
}
		else if(x%90==0){
		n=x/90;
		cout<<9*n<<" "<<40*n<<" "<<41*n;
}
		else if(x%126==0){
		n=x/126;
		cout<<28*n<<" "<<45*n<<" "<<53*n;
}
		else if(x%132==0){
		n=x/132;
		cout<<11*n<<" "<<60*n<<" "<<61*n;
}
		else if(x%144==0){
		n=x/144;
		cout<<16*n<<" "<<63*n<<" "<<65*n;
}
		else if(x%154==0){
		n=x/154;
		cout<<33*n<<" "<<56*n<<" "<<65*n;
}
		else if(x%176==0){
		n=x/176;
		cout<<48*n<<" "<<55*n<<" "<<73*n;
}

		else if(x%182==0){
		n=x/182;
		cout<<13*n<<" "<<84*n<<" "<<85*n;
}
		else if(x%198==0){
		n=x/198;
		cout<<36*n<<" "<<77*n<<" "<<85*n;
}
		else if(x%208==0){
		n=x/208;
		cout<<39*n<<" "<<80*n<<" "<<89*n;
}
		else if(x%234==0){
		n=x/234;
		cout<<65*n<<" "<<72*n<<" "<<97*n;
}
		else if(x%240==0){
		n=x/240;
		cout<<15*n<<" "<<112*n<<" "<<113*n;
}
		else if(x%306==0){
		n=x/306;
		cout<<17*n<<" "<<144*n<<" "<<145*n;
}
		else if(x%380==0){
		n=x/380;
		cout<<19*n<<" "<<180*n<<" "<<181*n;
}		else if(x%462==0){
		n=x/462;
		cout<<21*n<<" "<<220*n<<" "<<221*n;
}
		else if(x%552==0){
		n=x/552;
		cout<<23*n<<" "<<264*n<<" "<<265*n;
}
		else if(x%650==0){
		n=x/650;
		cout<<25*n<<" "<<312*n<<" "<<313*n;
}
		else if(x%756==0){
		n=x/756;
		cout<<27*n<<" "<<364*n<<" "<<365*n;
}
		else if(x%870==0){
		n=x/870;
		cout<<29*n<<" "<<420*n<<" "<<421*n;
}
		else if(x%992==0){
		n=x/992;
		cout<<31*n<<" "<<480*n<<" "<<481*n;
}
		else if(x%1122==0){
		n=x/1122;
		cout<<33*n<<" "<<544*n<<" "<<545*n;
}
		else if(x%1260==0){
		n=x/1260;
		cout<<35*n<<" "<<612*n<<" "<<613*n;
}
        else{
        	cout<<"Impossible";
		} 

	
	
	
}
