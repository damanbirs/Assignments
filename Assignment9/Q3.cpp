#include <iostream>
using namespace std;

int main(){
    int n,g[20][20],vis[20]={0},d[20],p[20],inf=9999;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>g[i][j];

    for(int i=0;i<n;i++) d[i]=inf, p[i]=-1;
    d[0]=0;

    for(int k=0;k<n;k++){
        int u=-1,m=inf;
        for(int i=0;i<n;i++)
            if(!vis[i] && d[i]<m) m=d[i],u=i;

        vis[u]=1;

        for(int v=0;v<n;v++)
            if(g[u][v] && g[u][v]<d[v] && !vis[v])
                d[v]=g[u][v], p[v]=u;
    }

    for(int i=1;i<n;i++)
        cout<<p[i]<<"-"<<i<<" ";
}
