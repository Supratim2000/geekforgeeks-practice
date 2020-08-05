//Merge Without Extra Space solution

#include <bits/stdc++.h>
#include <algorithm>
#define MOD 1000000007
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define endll "\n";
using namespace std;
typedef pair<int,int> pp;
void cinn(int &number) 
{ 
    bool negative = false; 
    register int c; 
    number = 0; 
    c = getchar(); 
    if (c=='-') 
    { 
        negative = true; 
        c = getchar(); 
    } 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
    if (negative) 
        number *= -1; 
}
void swap1(long long int &a,long long int &b){
    long long int temp=a;
    a=b;
    b=temp;
}
void heapify(long long int a[],long long int i,long long int n){
    long long int i1=2*i+1;
    long long int i2=2*i+2;
    long long int ii=i;
    if(i1<n&&a[ii]>a[i1]){
        ii=i1;
    }
    if(i2<n&&a[ii]>a[i2]){
        ii=i2;
    }
    if(i!=ii){
    swap1(a[ii],a[i]);
    heapify(a,ii,n);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        long long int n;cin>>n;
        long long int m;cin>>m;
        long long int a1[n];
        long long int a2[m];
        for(long long int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(long long int i=0;i<m;i++){
            cin>>a2[i];
        }
        //b_heap(a2,m);
        for(long long int i=0;i<n;i++){
            if(a1[i]>a2[0]){
                swap1(a1[i],a2[0]);
                heapify(a2,0,m);
            }
        }
        sort(a2,a2+m);
        for(long long int i=0;i<n;i++){
            cout<<a1[i]<<" ";
        }
        for(long long int i=0;i<m;i++){
            cout<<a2[i]<<" ";
        }
        cout<<endll;
        
    }
    return 0;
}
