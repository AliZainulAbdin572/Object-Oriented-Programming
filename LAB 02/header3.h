#ifndef HEADER3_H
#define HEADER3_H
#include <iostream>
using namespace std;

class Voter{
	public:
		string name;
		int age;
		void input();
		bool isEligible();
		
};

	void Voter::input(){
		cout<<"Enter Your Name : ";
		getline(cin,name);
		cout<<"Enter Your Age : ";
		cin>>age;
	}
	//returning true or false based on the age.(using bool)
	bool Voter::isEligible(){
		return age>18;
	}
#endif
