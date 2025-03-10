#include <bits/stdc++.h>
using namespace std;

int main () {
	
	float a,b,c;
	cout<<"3 reqem daxil et"<<"\n"<<"a : ";
	cin>>a;
	cout<<"\n"<<"b : ";
	cin>>b;
	cout<<"\n"<<"c : ";
	cin>>c;
	cout<<"\n";
	
	if (a>b && a>c) {
		cout<<"en boyuk : "<<a;
	}
	
	if (b>a && b>c) {
		cout<<"en boyuk : "<<b;
	}
	
	if (c>b && c>a) {
		cout<<"en boyuk : "<<c;
	}
	
	
	
	return 0;
}
