#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string texline;
	dest << "-------------------- BOOM ---------------------" << "\n";
	while(getline(source,texline))
	{
		dest << texline << '\n';
	}
	dest << "-------------------- HA!! ---------------------";
	
    source.close();
    dest.close();
	return 0;
}
