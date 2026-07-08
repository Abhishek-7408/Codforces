#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   char op,eq;
   int ans;
   cin >> a >> op >> b >> eq >> c;
   if(op=='+')
   ans = a+b;
   else if(op=='-')
   ans = a-b;
   else 
   ans=a*b;
   if(ans==c)
   cout<<"Yes";
   else
   cout<<ans;

    
}