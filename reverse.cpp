#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,str2="";
    getline(cin, str);
    int len = str.size()-1;
    int i=len;

    while (i>=0)
    {
         if(str[i]==' '){
            cout<<str2<<" ";
            str2="";
         }
         else {
            str2+=str[i];
         }
         i--;
    }
    cout<<str2<<" ";

    return 0;
}
