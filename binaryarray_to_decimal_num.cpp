#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test_case;
	cin>>test_case;
	while(test_case--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		int size=str.size();
		long long pow2 = 1;
		long long product = 0;

		for(int i = size  -1 ; i >= 0 ; i--){
			int digit = str[i] - '0';
			product = product + (digit*pow2);
			pow2 = pow2 * 2;
		}
		cout<<product<<endl;
	}



	return 0;

	

}