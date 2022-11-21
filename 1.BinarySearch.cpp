#include <bits/stdc++.h>
                            
using namespace std;
typedef long long int lld;

void solve(){
    
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int to_find;
    cin>>to_find;
    int lo=0,hi=n-1,mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        
        if(v[mid]<to_find){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
        
    }
    if(v[lo]==to_find){
        cout<<lo+1<<endl;
    }
    else if(v[hi]==to_find){
        cout<<hi+1<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
                            
}
