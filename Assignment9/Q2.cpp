#include <iostream>
using namespace std;

int n,g[20][20],v[20];

void dfs(int u){
    v[u]=1; cout<<u<<" ";
    for(int x=0;x<n;x++)
        if(g[u][x] && !v[x])
            dfs(x);
}

int main(){
    int s;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>g[i][j];
    cin>>s;
    dfs(s);
}
