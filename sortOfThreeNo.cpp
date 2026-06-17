#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int min,max,mid;
    
    
    
    if(a>=b && a>=c)
    max=a;
    else if(b>=a && b>=c)
    max = b;
    else 
    max = c;
    
    if(a<=b && a<=c)
    min = a;
    else if(b<=a && b<=c)
    min = b;
    else 
    min = c;
    
    
    mid = a+b+c-min-max;
    
    cout<<min<<endl;
    cout<<mid<<endl;
    cout<<max<<endl<<endl;
    
    
    
    
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}