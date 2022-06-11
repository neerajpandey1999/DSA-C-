/* 
Palindrome Pattern
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k;
    
        for(k=i;k>=1;k--){
            cout<<k;

        }
        
        for(int j=i;j>1;j--){
            cout<<k+2;
            k++;
        }
        cout<<endl;
    }
    return 0;

}