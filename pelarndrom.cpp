#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	string str_rev;
	cin>>str;
	int str_size = str.size();

	for(int i = str_size-1 ; i>=0 ; i--)
	{
		str_rev = str_rev + str[i];
	}

	if(str == str_rev)
		cout<<"YES";
	else 
		cout<<"NO";




	return 0;

	

}