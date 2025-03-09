#include <iostream>
using namespace std;
int main(){
	char a,b,c,d,e,f,g,h,k,l;
	int y,x,z;
	cout<<"*****ZEHMET OLMASA SIZE VERILEN SUALLARI CAVABLANDIRIN (HER SUAL 10 BAL)*****\n";
	cout<<"1. 2+2*2 qiymetini hesablayin\n";
	cout<<"A)4"<<endl<<"B)6"<<endl<<"C)8"<<endl<<"D)10"<<endl<<"E)12"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a1: cin>>a;
	switch (a){
		case 'A': cout<<"Variantiniz sehvdir, dogru cavab B variantidir (Birinci vurma emeli edilmelidir)"; break;
		case 'B': cout<<"Variantiniz dogrudur"; y+=10; break;
		case 'C': cout<<"Variantiniz sehvdir, dogru cavab B variantidir (Birinci vurma emeli edilmelidir)"; break;
		case 'D': cout<<"Variantiniz sehvdir, dogru cavab B variantidir (Birinci vurma emeli edilmelidir)"; break;
		case 'E': cout<<"Variantiniz sehvdir, dogru cavab B variantidir (Birinci vurma emeli edilmelidir)"; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a1; 
		}
	cout<<endl;
	cout<<"_______________________________________________________________\n";
	cout<<"2. 5! qiymetini hesablayin\n";
	cout<<"A)30"<<endl<<"B)60"<<endl<<"C)120"<<endl<<"D)180"<<endl<<"E)240"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a2: cin>>b;
	switch (b){
		case 'A': cout<<"Variantiniz sehvdir, dogru cavab C variantidir (1*2*3*4*5=120)"; break;
		case 'B': cout<<"Variantiniz sehvdir, dogru cavab C variantidir (1*2*3*4*5=120)"; break;
		case 'C': cout<<"Variantiniz dogrudur"; y+=10; break;
		case 'D': cout<<"Variantiniz sehvdir, dogru cavab C variantidir (1*2*3*4*5=120)"; break;
		case 'E': cout<<"Variantiniz sehvdir, dogru cavab C variantidir (1*2*3*4*5=120)"; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a2;	
		}	
	cout<<endl;
	cout<<"_______________________________________________________________\n";
	cout<<"3. Kubun nece uzu var?\n";
	cout<<"A)4"<<endl<<"B)6"<<endl<<"C)8"<<endl<<"D)10"<<endl<<"E)12"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a3: cin>>c;
	switch (c){
		case 'A': cout<<"Variantiniz sehvdir, dogru cavab B variantidir"; break;
		case 'B': cout<<"Variantiniz dogrudur"; y+=10; break;
		case 'C': cout<<"Variantiniz sehvdir, dogru cavab B variantidir"; break;
		case 'D': cout<<"Variantiniz sehvdir, dogru cavab B variantidir"; break;
		case 'E': cout<<"Variantiniz sehvdir, dogru cavab B variantidir"; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a3;
		}
	cout<<endl;
	cout<<"_______________________________________________________________\n";
	cout<<"4. Duzbucaqlinin perimetr dusturu hansidir?\n";
	cout<<"A)(a+b)*2"<<endl<<"B)4*a"<<endl<<"C)a+b+c"<<endl<<"D)(a+b)/2"<<endl<<"E)a+b"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a4: cin>>d;
	switch (d){
		case 'C': cout<<"Variantiniz dogrudur"; y+=10; break;
		case 'B': 
		case 'A': 
		case 'D': 
		case 'E': 
				cout<<"Variantiniz sehvdir, dogru cavab A variantidir"; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a4;
		}
	cout<<endl;
	cout<<"_______________________________________________________________\n";
	cout<<"5. 6 fehle bir isi 6 saata edirse, 9 fehle hemin isi nece saata eder?\n";
	cout<<"A)2"<<endl<<"B)3"<<endl<<"C)4"<<endl<<"D)5"<<endl<<"E)6"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a5: cin>>e;
	switch (e){
		case 'A': 
		case 'B': 
		case 'D': 
		case 'E':
			cout<<"Variantiniz sehvdir, dogru cavab C variantidir"; break;
		case 'C': cout<<"Variantiniz dogrudur"; y+=10; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a5;	
		}
	cout<<endl;
	cout<<"_______________________________________________________________\n";
	cout<<"6. 1 kartof 5 deq. pisirse, 5 kartof nece deq. piser?\n";
	cout<<"A)3"<<endl<<"B)4"<<endl<<"C)6"<<endl<<"D)25"<<endl<<"E)5"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a6: cin>>f;
	switch (f){
		case 'A': cout<<"Variantiniz sehvdir, dogru cavab E variantidir"; break;
		case 'B': cout<<"Variantiniz sehvdir, dogru cavab E variantidir"; break;
		case 'C': cout<<"Variantiniz sehvdir, dogru cavab E variantidir"; break;
		case 'D': cout<<"Variantiniz sehvdir, dogru cavab E variantidir"; break;
		case 'E': cout<<"Variantiniz dogrudur"; y+=10; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a6;
	}
	cout<<endl;
	cout<<"_______________________________________________________________\n";
	cout<<"7. 75 ededinin 20 faizi necedir?\n";
	cout<<"A)15"<<endl<<"B)10"<<endl<<"C)20"<<endl<<"D)25"<<endl<<"E)60"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a7: cin>>g;
	switch (g){
		case 'B': cout<<"Variantiniz sehvdir, dogru cavab A variantidir (75*20/100 = 15)\n"; break;
		case 'A': cout<<"Variantiniz dogrudur"; y+=10; break;
		case 'C': cout<<"Variantiniz sehvdir, dogru cavab A variantidir (75*20/100 = 15)\n"; break;
		case 'D': cout<<"Variantiniz sehvdir, dogru cavab A variantidir (75*20/100 = 15)\n"; break;
		case 'E': cout<<"Variantiniz sehvdir, dogru cavab A variantidir (75*20/100 = 15)\n"; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a7;
	}
		cout<<endl;
	cout<<"_______________________________________________________________\n";
	cout<<"8. Qiymeti 75 manat olan koftani 20 faiz endirimle satdilar, kofta nece manata satildi?\n";
	cout<<"A)15"<<endl<<"B)10"<<endl<<"C)20"<<endl<<"D)25"<<endl<<"E)60"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a8: cin>>h;
	switch(h){
		case 'A': cout<<"Variantiniz sehvdir, dogru cavab E variantidir (75-(75*20/100)=75-15=60)\n"; break;
		case 'E': cout<<"Variantiniz dogrudur\n"; y+=10; break;
		case 'C': cout<<"Variantiniz sehvdir, dogru cavab E variantidir (75-(75*20/100)=75-15=60)\n"; break;
		case 'D': cout<<"Variantiniz sehvdir, dogru cavab E variantidir (75-(75*20/100)=75-15=60)\n"; break;
		case 'B': cout<<"Variantiniz sehvdir, dogru cavab E variantidir (75-(75*20/100)=75-15=60)\n"; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a8;
	}
	cout<<"_______________________________________________________________\n";
	cout<<"9. Ededi 10 faiz azaltdilar, daha sonra 10 faiz artirdilar. Ilkin eded nece deyisdi?\n";
	cout<<"A)2 defe artdi"<<endl<<"B)2 defe azaldi"<<endl<<"C)deyismedi"<<endl<<"D)1 faiz azaldi"<<endl<<"E)1 faiz artdi"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a9: cin>>k;
	switch(k){
		case 'A':
		case 'B':
		case 'C':
		case 'E':
			cout<<"Variantiniz sehvdir, dogru cavab D variantidir\n"; break;
		case 'D':
			cout<<"Variantiniz dogrudur\n"; y+=10; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a9;
	}
	cout<<"_______________________________________________________________\n";
	cout<<"10. Ededi 400 faiz artirdilar. Eded nece defe artdi?\n";
	cout<<"A)3 defe artdi"<<endl<<"B)4 defe artdi"<<endl<<"C)5 defe artdi"<<endl<<"D)6 defe artdi"<<endl<<"E)hecbiri"<<endl;
	cout<<"Variantinizi qeyd edin:";
	a10: cin>>l;
	switch(l){
		case 'A':
		case 'B':
		case 'D':
		case 'E':
			cout<<"Variantiniz sehvdir, dogru cavab C variantidir\n"; break;
		case 'C':
			cout<<"Variantiniz dogrudur\n"; y+=10; break;
		default: cout<<"Zehmet olmasa A,B,C,D,E variantlarinin birini qeyd edin\nVariantinizi yeniden qeyd edin: "; 
		goto a10;
	}
	x=y/10;
	z=10-x;
	cout<<"_______________________________________________________________\n";
	cout<<"DOGRU CAVABLARIN SAYI: "<<x<<endl;
	cout<<"SEHV CAVABLARIN SAYI: "<<z<<endl;
	cout<<"YEKUN BAL: "<<y<<endl;
	cout<<"_______________________________________________________________\n*****YARISDA ISTIRAK ETDIYINIZ UCUN TESEKKUR EDIRIK!*****";
	return 0;
	}
