
#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
using namespace std;


int main(){
    int k;
    cin>>k;
    cin.get();
    for(int j=0;j<k;j++){
        char str[4000];
        cin>>str;
        int sum =0;
        for(int i=0;i<strlen(str);){
            if(str[i]=='V'){
                sum += 5;
                i++;
            }
            if(str[i]== 'X'){
                str[i]+= 10;
                i++;
            }
            if(str[i]=='I' && str[i+1]=='X'){
                sum+= 9;
                i+=2;
            }
            if(str[i]=='I' && str[i+1]=='V'){
                sum+= 4;
                i+=2;
            }
            if(str[i]=='I'){
                sum+= 1;
                i++;
            }

        }
        cout<<sum<<endl;


}









return 0;
}
