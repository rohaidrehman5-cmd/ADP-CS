#include <iostream>
using namespace std;
int main(){
 float pp,sp;
 int qty;
 cin>>pp>>sp>>qty;
 float tp=pp*qty;
 float ts=sp*qty;
 float pl=ts-tp;
 cout<<tp<<endl<<ts<<endl<<pl;
 return 0;
}
