#include <iostream>
using namespace std;
int main(){
    cout<<"Hello World"<<endl;
    int n;cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}