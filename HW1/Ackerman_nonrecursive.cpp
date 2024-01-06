#include <iostream>
#include <ctime>
using namespace std;
typedef long long ll; //定義long long 為ll 
int main()
{
	int m, n;
	cout<<"輸入範圍:"<<endl; 
	cout<<" m=4 n<=1"<<endl;
	cout<<" m=3 n<=22"<<endl;
	cout<<" m=2 n<=1999998"<<endl;
	cout<<" m=1 n<=39999998"<<endl;
	cout<<" m=0 n<=39999999"<<endl;
	cout<<"請輸入m,n中間以空格分開:";
	cin >> m >> n;
	clock_t start,stop;
	
	static ll dp[5][40000000];//建一5*40000000大小的 long long 陣列 
	start=clock(); //計時開始 
	for (ll i = 0; i < 5; i++)//使用動態規劃 
	{
		for (ll j = 0; j < 40000000; j++)
		{
			dp[i][j]=0;
			if (i == 0)
				dp[i][j] = j + 1;
			else if (i > 0 && j == 0)
				dp[i][j] = dp[i - 1][1];
			else
				dp[i][j] = dp[i - 1][dp[i][j-1]];
			if(i==m && j==n)
				break;
		}
	} 
	stop=clock();//計時結束 
	//cout<<stop-start<<endl; 
	cout<<"Ackerman("<<m<<","<<n<<"):"<<dp[m][n]<<endl;
	cout<<"花費時間(ms):"<<stop-start<<endl; 
}
/* 
	m=4 n<=1 
	m=3 n<=22
	m=2 n<=1999998
	m=1 n<=39999998
	m=0 n<=39999999
*/
	
	
	
	
	
	
	
	
	
	
