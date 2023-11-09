#include<bits/stdc++.h>
using namespace std;//buy or sell stock
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int prof=0;
int diff=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
 diff=arr[j]-arr[i];
 if(diff>prof){
prof=max(diff,prof);
 }       
    }
}
cout<<"max profit is"<<prof;






}