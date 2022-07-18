/*
Let's consider a word too long, if its length is strictly more than 10 characters.
 All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between 
them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }    
    for (int i = 0; i < n; i++)
    {
        j=s[i].length();
            if(j<=10)
                cout<<s[i]<<endl;
            else
                {
                    cout<<s[i].at(0)<<j-2<<s[i].at(j-1)<<endl;
                }
       }
    
    return 0;
}