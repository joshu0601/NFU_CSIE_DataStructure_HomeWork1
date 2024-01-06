#include <iostream>
#include <ctime>
using namespace std;
typedef long long ll; //�w�qlong long ��ll 
int main()
{
	int m, n;
	cout<<"��J�d��:"<<endl; 
	cout<<" m=4 n<=1"<<endl;
	cout<<" m=3 n<=22"<<endl;
	cout<<" m=2 n<=1999998"<<endl;
	cout<<" m=1 n<=39999998"<<endl;
	cout<<" m=0 n<=39999999"<<endl;
	cout<<"�п�Jm,n�����H�Ů���}:";
	cin >> m >> n;
	clock_t start,stop;
	
	static ll dp[5][40000000];//�ؤ@5*40000000�j�p�� long long �}�C 
	start=clock(); //�p�ɶ}�l 
	for (ll i = 0; i < 5; i++)//�ϥΰʺA�W�� 
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
	stop=clock();//�p�ɵ��� 
	//cout<<stop-start<<endl; 
	cout<<"Ackerman("<<m<<","<<n<<"):"<<dp[m][n]<<endl;
	cout<<"��O�ɶ�(ms):"<<stop-start<<endl; 
}
/* 
	m=4 n<=1 
	m=3 n<=22
	m=2 n<=1999998
	m=1 n<=39999998
	m=0 n<=39999999
*/
	
	
	
	
	
	
	
	
	
	
