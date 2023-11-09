#include<bits/stdc++.h>
using namespace std;
int maxzero();
int main(){
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
}

int m=0;
int s;
    for(int i=0;i<n;i++){
        int t=0;
        for(int j=0;j<n;j++){
            if(arr[j][i]==0){
t++;
if(t>m){
    m=t;
    s=j;
}
            }
        }
    }
    cout<<"the column with max 0 is"<<s<<endl;




}