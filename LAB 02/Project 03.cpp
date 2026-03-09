#include <iostream>
#include "header3.h"
using namespace std;

int main(){
	
	Voter v1;
	v1.input();
	
	if(v1.isEligible()){
		//agar person ki age 18 sy above ha yani true ha to eligible hoga.
		cout<<v1.name<<" is eligible to vote."<<endl;
	}
	else{
		//false hony ki soorat ma ye statement print hogi.
		cout<<v1.name<<" is not eligible to vote."<<endl;
	}
	
	return 0;
}
