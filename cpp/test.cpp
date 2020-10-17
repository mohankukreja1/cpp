
#include <iostream>
#include <cstring>
#include<queue>
#include <algorithm>
#include<cmath>
#include<stack>
using namespace std;

int main(){
    int k;
    cin>>k;
    for(int j=0;j<k;j++){
    int n,num;
    cin>>num;
    cin>>n;
    int mask = 1<<n;
    cout<<mask<<endl;
    if(num&mask){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }

}



return 0;
}

