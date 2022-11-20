//
//  main.cpp
//  BinarySearch
//
//  Created by A Emmanual Sarker on 20/11/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            
using namespace std;
typedef long long int lld;

void solve(){
    
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    /*
     Binary Search
     0 1 2 3 4
     2 3 4 5 6 (check if 5 is present or not)
     Search Space - >
     
     mid  search space 0-5
     2 -> 3-5
     4 -> 3-3
     3-> 5
     
     */
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int to_find;
    cin>>to_find;
    int lo=0,hi=n-1;
    int mid;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<to_find){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    
    if(v[lo]==to_find){
        cout<<lo<<endl;
    }
    else if(v[hi]==to_find){
        cout<<hi<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    
    return 0;
                            
}
