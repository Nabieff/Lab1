#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Avtomobilin gedeceyi mesafeni qeyd edin: ";
	cin>>a;
	cout<<"Avtomobilin 100km-e serf etdiyi benzinin miqdarini qeyd edin: ";
	cin>>b;
	cout<<"Benzinin qiymetini daxil edin: ";
	cin>>c;
	float d;
	d=a/b*c;
	cout<<"-------------------------------------"<<"\n";
	cout<<"AVTOMOBIL SEFERI ZAMANI YANACAGA SERF EDILEN MEBLEG: "<<d<<" manat";
	
	return 0;
	
}

