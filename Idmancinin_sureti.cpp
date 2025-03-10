#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Idmancinin qacis mesafesi (metr)): ";
	cin>>a;
	cout<<"Idmancinin bu qacisa serf etdiyi zaman (deq): ";
	cin>>b;
	float c,d;
	c=b*60;
	d=a/c;
	cout<<"Idmancinin sureti: "<<d<<" m/san";
	return 0;
	
	
}
