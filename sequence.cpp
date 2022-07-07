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
		long long product = 1;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			product = product * a;
		}


		int digit=product%10;
		if(digit == 2 || digit == 3 || digit == 5)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}



	return 0;

	

}