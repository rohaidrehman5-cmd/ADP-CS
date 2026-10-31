#include <iostream>
using namespace std;
int main(){
 int total;
 cin>>total;
 int hr=total/3600;
 int rem=total%3600;
 int min=rem/60;
 int sec=rem%60;
 cout<<hr<<endl<<min<<endl<<sec;
 return 0;
}
