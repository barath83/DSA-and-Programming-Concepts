//https://www.hackerrank.com/challenges/making-anagrams/problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    //accepts two strings 
    string s1,s2;
    cin>>s1>>s2;

    //declare a array of length 26 and initialize all values to 0
    int a[26] = {0};

    int minDel=0;

    //for the first string, iterate through the length of the string and count every characters freq in the a[] array
    for(int i=0;i<s1.length();i++)
    {
        a[s1[i]-'a']++;
    }

    //for the second string ,again iterate the length of string now subtract for every character's freq in the same a[]
    for(int i=0;i<s2.length();i++)
    {
        a[s2[i]-'a']--;
    }

    //finally add absolute value of all elements in the a[] that will give the min deletions
    for(int i=0;i<26;i++){
        minDel+=abs(a[i]);
    }

    cout<<minDel<<endl;
    
}


//Time complexity : O(n)
/*
Here for the first string we increment the occurrence  of all characters in a hash array which holds for a-z of length 26
In the second string we decrement for every occurrence of the characters in the same hash array
Now finally adding the absolute values in array will give the answer
*/