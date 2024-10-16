#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,l;
    cout<<"Enter value of a:";
    cin>>a;
    if(a%2==0){
        l=a-1;
    }
    else{
        l=a;
    }
    for(int i=1;i<=2*l-1;i+=2){
        cout<<i;
        if (i<= 2*l-3) {
            cout << ", ";
        }
    }
    cout<<endl;
    return 0;
}
