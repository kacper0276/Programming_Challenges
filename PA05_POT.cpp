#include <iostream>
using namespace std;
int main()
{
	int koncowki [10][4] ={
	{0, 0, 0, 0},	
		{1, 1, 1, 1},	
			{6, 2, 4, 8},	
				{1, 3 ,9, 7},	
					{6, 4, 6, 4},	
						{5, 5, 5, 5},	
							{6, 6, 6, 6},	
								{1, 7, 9, 3},	
									{6, 8, 4, 2},	
										{1, 9, 1, 9}	
	};
	int p, w;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
			cin>>p;
	cin>>w;
	cout<<koncowki[p%10][w%4]<<endl;
	
	}
 			return 0;
}
