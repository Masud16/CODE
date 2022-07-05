#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	string str_rev;
	bool flag=0;
	cin>>str;

	for(int i=(str.size()-1)/2,j=i+1;i>=0,j<str.size()-1;i--,j++)
	{
		if(str[i]==str[j])
			flag++;
		else
			flag=0;
	}

	if(flag==(str.size()/2))
		cout<<"YES";
	else
		cout<<"NO";

}