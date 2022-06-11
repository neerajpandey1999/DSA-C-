#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag;
    cin>>n;
    int temp=0;
    while(n!=0){
        temp=temp*10+(n%10);
        n/=10;
    }
    cout<<temp;
}