#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            flag=true;
            break;
        }
        else{
            continue;
        }
    }
    if(flag==true){
        cout<<"Non-Prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
}