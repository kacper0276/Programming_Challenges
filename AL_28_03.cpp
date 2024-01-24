#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,max;
	char c;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
	 max = -1;
        for(int i = 0, num; i < n; i++)
        {
            num = 0;
            for(int j = 0; j < n; j++)
            {
                cin >> c;
                if(c == '#')
                {
                    if(max < num)
                        max = num;
                    num = 0;
                }
                if(c == '.'){
                	num++;
				}
            }
            if(max < num)
                max = num;
        }
        cout << max*max << "\n";
    }
    return 0;
}