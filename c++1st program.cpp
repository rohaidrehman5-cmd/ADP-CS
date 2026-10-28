#include <iostream>
using namespace std;
int main()
{
int vf,vi,a,s;
	cout<<"enter final velocity";
	cin>>vf;
	cout<<"enter initial";
	cin>>vi;
	cout<<"enter acceleration";
	cin>>a;
	s=(vf*vf-vi*vi)/(2*a);
	cout<<"displacement="<<s;
	return 0;
}