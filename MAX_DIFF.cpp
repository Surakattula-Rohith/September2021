#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int T;

	cin>>T;

	for(int i = 0; i < T; i++)
	{
		lli N, S, abs = 0;

		cin>>N>>S;

		if(N >= S)
		{
			abs = S;
		}
		else
		{
			int diff = S - N;
			abs = N - diff;
		}

		cout<<abs<<endl;
	}

	return 0;
}
