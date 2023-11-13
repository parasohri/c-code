#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    string y;
    int m;
    int n;
    cin>>x>>y>>n>>m;
        int arr[26] = {0}; 
        for (int i = 0; i < m; i++)
        {
            arr[x[i] - 'a']++;
        }
        for (int j = 0; j < n; j++)
        {
            arr[y[j] - 'a']++;
        }
        int c = 0;
        for (int k = 0; k < 26; k++) 
        {
            if (arr[k] != 0)
            {
                c++;
            }
        }
        cout << c;
    
}