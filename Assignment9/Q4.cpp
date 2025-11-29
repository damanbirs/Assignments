#include <iostream>
using namespace std;

int main(){
    int n,g[20][20],vis[20]={0},d[20],inf=9999,s;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>g[i][j];
    cin>>s;

    for(int i=0;i<n;i++) d[i]=inf;
    d[s]=0;

    for(int k=0;k<n;k++){
        int u=-1,m=inf;
        for(int i=0;i<n;i++)
            if(!vis[i] && d[i]<m) m=d[i],u=i;

        vis[u]=1;

        for(int v=0;v<n;v++)
            if(g[u][v] && d[u]+g[u][v] < d[v])
                d[v]=d[u]+g[u][v];
    }

    for(int i=0;i<n;i++) cout<<d[i]<<" ";
}
