#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int firDig = x/1000;
    if(firDig%2==0)
    cout<<"EVEN";
    else
    cout<<"ODD";
}