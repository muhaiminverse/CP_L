#include<bits/stdc++.h>
using namespace std;

int main(){
    

        int n,t;
        cin>>t;
        while (t--)
        {
            
        cin>>n;
        long a[n];
//takeing array
    for (int i = 0; i < n; i++) cin>>a[i];
	
	int mx;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			mx = -1e6;
			for (int k = i; k <= j; k++)
			{
				if(mx<a[k]) mx = a[k];
			}
			cout<<mx<<" ";
		}
		
	}
		cout<<endl;

        }
        

        

    
    
}