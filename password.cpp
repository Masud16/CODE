#include<bits/stdc++.h>
using namespace std;

int main()
{

	string str;
	
//	cin>>str;
	
	while(cin>>str)
	{
	    int i=0;
	    bool fg1=0,fg2=0,fg3=0;
	    int res=0;
	    
	    int len = str.size();
	    
	    while(i<len)
		{
    		if(isupper(str[i]))
    			fg1=true;
    		else if(islower(str[i]))
    			fg2=true;
    		else if(isdigit(str[i]))
    			fg3=true;
    
    		if(fg1==1 && fg2==1 && fg3==1)
    			{
    				res++;
    				fg1=0,fg2=0,fg3=0;
    			}
    
    		i++;
		    
		}
    cout<<res<<endl;
	}
	
	
}