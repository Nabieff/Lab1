#include <bits/stdc++.h>

using namespace std;

int main () {
	
	float a,b,c;
	cout<<"Ucbucagin 3 terefinide qeyd edin"<<"\n"<<"a terefinin uzunlugu : ";
	cin>>a;
	cout<<"\n"<<"b terefinin uzunlugu : ";
	cin>>b;
	cout<<"\n"<<"c terefinin uzunlugu : ";
	cin>>c;
	cout<<"\n";
	
	if ((a+b>c) && (a+c>b) &&  (b+c>a)) {
		cout<<"Ucbucagin terefleri uygundur";
		 
		if ((a=b)||(a=c)||(b=c)) {
			cout<<"\n"<<"Bu ucbucag beraber yanlidir";
		}
		
	}
	
	else {
		cout<<"Ucbucagin terefleri arasinda uyusmazlig var";
	}

	if (a=b) 
	
	
	
	
	
	
	return 0;
}
