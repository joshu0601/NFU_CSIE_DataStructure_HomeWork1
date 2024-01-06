#include <iostream>
#include <ctime>
using namespace std;
typedef long long ll; //�w�qlong long ��ll 
static long long A(ll m,ll n) //���J�Ҩ�ƻ��j 
{
	//cout<<"A("<<m<<","<<n<<")"<<endl; 
	if (m == 0)
		return n + 1;
	else if (m > 0 && n == 0)
	{
		return A(m - 1, 1);
	}
	else
	{
		return A(m - 1, A(m, n - 1));
	}
}
int main()
{
	ll m,n;
	cout<<"�п�Jm,n�����H�Ů���}:";
	cin>>m>>n;
	clock_t t;
	cout<<"�I�s�����:" <<endl; 
	clock_t start=clock();//�p�ɶ}�l 
	cout <<"Ackerman("<<m<<","<<n<<"):"<< A(m,n)<<endl;
	clock_t stop=clock();//�p�ɵ���
	cout<<"��O�ɶ�(ms):"<<stop-start<<endl;
	cout<<"t="<<t<<endl;
}
/*
	int r[14]={30000,30000,10000,10000,5000,5000,500,50,50,10,1,1,1,1};
	for(int j=0;j<14;j++)
	{
		clock_t start=clock();//�p�ɶ}�l 
		for(int i=0;i<r[j];i++)
		{	
			A(m,0+j);
		}
		clock_t stop=clock();//�p�ɵ���
		cout<<(float)(stop-start)/r[j]<<endl;
		t+= stop-start;
	}
	
	*/
