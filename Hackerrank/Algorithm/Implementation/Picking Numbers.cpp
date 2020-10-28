//https://www.hackerrank.com/challenges/picking-numbers/problem

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.first < b.first;
}

int main()
{
    //take n 
    int n;
    cin>>n;

    //take a variable an initialize it to minimum int value
    int ansc = INT_MIN;

    //take a map
    unordered_map<int,int> mp;

    //take all array values and also put them in map to count freq of each element
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    //make pair using vector
    vector<pair<int,int>> vm;

    for (auto& it : mp) { 
        //push element,freq pair into vector
        vm.push_back(it); 
        //find out the maximum freq element as we can have a subarray which has a array that contains only one number the maximum times 
        if(it.second > ansc){
            ansc = it.second;
        }
    } 

    //sort the vector as per the second element i.e the frequency value
    sort(vm.begin(),vm.end(),cmp);
    int size = vm.size();
    
    

    for(int i=0;i<size-1;i++){
        //if the difference btw elements are less than or equal 1
        if(abs(vm[i].first-vm[i+1].first)<=1)
        {   
            //if the current subarray size is greater than already existing one 
            //then store value in ansc 
            int ans = vm[i].second+vm[i+1].second;
            if(ans>ansc)
            {
                ansc = ans;
            }
        }
    }
    //if the original array contains only one number for n times then n is answer
    if(mp.size()==1){
        cout<<n<<endl;
    }
    //else print ansc
    else{
        cout<<ansc<<endl;
    }
    
}
