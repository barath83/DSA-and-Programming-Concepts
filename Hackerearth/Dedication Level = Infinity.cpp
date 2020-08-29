//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/baaki-che/

//Time complexity : O(logn)

#include<bits/stdc++.h>
using namespace std;

bool sortByVal(const pair<string, int> &a,const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
}

int main()
{
    int n;
    cin>>n;
    unordered_map<string,int> m;
    for(int i=0;i<n;i++)
    {
        string s;
        int k;
        cin>>s>>k;
        m[s] = k;
    }
    vector<pair<string, int>> vec;
    unordered_map<string, int> :: iterator it2;
    for (it2=m.begin(); it2!=m.end(); it2++) 
    {
        vec.push_back(make_pair(it2->first, it2->second));
    }

    sort(vec.begin(), vec.end(), sortByVal); 

    for(int i=0;i<3;i++)
    {
        cout<<vec[i].first<<endl;
    }
}