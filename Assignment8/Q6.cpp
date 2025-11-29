#include <iostream>
using namespace std;

struct PQ {
    int a[1000],n=0;
    void push(int x){
        int i=n++; a[i]=x;
        while(i>0){
            int p=(i-1)/2;
            if(a[p]>=a[i]) break;
            int t=a[p]; a[p]=a[i]; a[i]=t;
            i=p;
        }
    }
    int top(){ return a[0]; }
    int pop(){
        int r=a[0];
        a[0]=a[--n];
        int i=0;
        while(true){
            int l=2*i+1,r1=2*i+2,b=i;
            if(l<n && a[l]>a[b]) b=l;
            if(r1<n && a[r1]>a[b]) b=r1;
            if(b==i) break;
            int t=a[i]; a[i]=a[b]; a[b]=t;
            i=b;
        }
        return r;
    }
};

int main(){
    PQ q;
    int n,x; 
    cin>>n;
    for(int i=0;i<n;i++){ cin>>x; q.push(x); }
    cout<<q.top()<<" ";
    cout<<q.pop()<<" ";
    cout<<q.pop()<<" ";
}
