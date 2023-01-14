#include <iostream>
using namespace std;
int main() 
{
	
	float mg, cg, dg, g, dag, hg, kg, kw, t;
	cout<<"Masukan Massa G : ";
	cin>>g;

 mg = g*1000;
 cg = g*100;
 dg = g*10;
 dag = g/10;
 hg = g/100;
 kg = g/1000;
 kw = g/100000;
 t = g/1000000;

 cout<<"\nHasil G Ke mg : "<<mg;
 cout<<"\nHasil G Ke cg : "<<cg;
 cout<<"\nHasil G Ke dG : "<<dg;
 cout<<"\nHasil G Ke dag : "<<dag;
 cout<<"\nHasil G Ke hg : "<<hg;
 cout<<"\nHasil G Ke kg : "<<kg;
 cout<<"\nHasil G Ke kw : "<<kw;
 cout<<"\nHasil G Ke ton : "<<t;
	
}
