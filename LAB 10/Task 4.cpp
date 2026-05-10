#include <fstream>
#include <iostream>
using namespace std;

int main(){
	//writing mode...
	ofstream fout("students.txt");
	fout<<"Names\tRoll No"<<endl;
	fout<<"Ali\t02"<<endl;
	fout<<"Hadi\t09"<<endl;
	fout<<"Zain\t05"<<endl;
	fout.close();
	
	//reading mode...
	ifstream fin("students.txt");
	string line;
	cout<<"~~~~Students Details~~~~"<<endl;
	while (getline(fin,line)){
		cout<<line<<endl;
	}
	fin.close();
	cout<<"File is Successfully Opened in Reading Mode."<<endl;
	return 0;
}
