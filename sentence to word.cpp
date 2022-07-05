#include<bits/stdc++.h>
using namespace std;

char uppercase(char a)
{
    return a - 'a' + 'A';
}



int main()
{
	string str;
	while(1)
	{
		cin>>str;

        int n=str.size();

		if(n==0)
			break;


		for(int i=0;i<n;i++){
            cout<<uppercase(str[i]);
		}
		cout<<endl;
	}


}
