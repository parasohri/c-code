#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){//Rearrange Array Elements by Sign
        cin>>arr[i];
    }
    int v[n];
    int t=0;
    int p=1;
     for(int i=0;i<n;i++){
        if(arr[i]>0){
            v[t]=arr[i];
            t=t+2;
        }
        if(arr[i]<0){
            v[p]=arr[i];
            p=p+2;
        }

     }
     for(int u=0;u<n;u++){
        cout<<v[u]<<endl;
     }}