//https://www.hackerrank.com/challenges/caesar-cipher-1/problem


#include <bits/stdc++.h>

using namespace std;

int main()
{
    //string length
    int n;
    cin>>n;

    //accepts string
    string s;
    cin>>s;

    //rotation factor
    int d;
    cin>>d;

    string ans="";

    for(int i=0;i<n;i++)
    {
        //take each character
        char t = s[i];
        //lower case
        if(t<='z'&&t>='a')
        {
            //increment the character with the rotation factor
            //d%26 works for cases where the rotation factor is greater than 26
            t = char(s[i]+d%26);
            if(t<='z'&&t>='a')
            {
                
            }//if the character is not a alphabet as it becomes some other character upon addition of rotation factor like if we z plus 3 or so
            //subtract it by 26 so it becomes a alphabet again and rotates within alphabet
            else{
                t=char(t-26);
            }
            ans+=t;
        }
        else if(t<='Z'&&t>='A')
        {
            t = char(s[i]+d%26);
            if(t<='Z'&&t>='A')
            {
                
            }else{
                t=char(t-26);
            }
            ans+=t;
        }
        //if it's not a alphabet simply append it
        else{
            ans+=t;
        }
        
    }

    cout<<ans<<endl;
}
