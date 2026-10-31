#include <iostream>
using namespace std;
int main(){
 float dist,avg,price;
 cin>>dist>>avg>>price;
 float consumed=dist/avg;
 float cost=consumed*price;
 cout<<consumed<<endl<<cost;
 return 0;
}
