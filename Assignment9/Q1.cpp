#include <iostream>
using namespace std;

int main(){
    int n, g[20][20], v[20]={0}, q[20], f=0, r=0, s;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>g[i][j];
    cin>>s;

    v[s]=1; q[r++]=s;
    while(f<r){
        int u=q[f++]; 
        cout<<u<<" ";
        for(int x=0;x<n;x++)
            if(g[u][x] && !v[x]){
                v[x]=1;
                q[r++]=x;
            }
    }
}
