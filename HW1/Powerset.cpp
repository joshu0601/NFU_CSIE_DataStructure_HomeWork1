#include<iostream>
#include <string>
#include <ctime>
using namespace std;
void powerset(string s,int index,string x)
{
	if(s.length()==index)//���Ш�̫Ỽ�j���� 
	{
		return;
	}
	cout<<"{"<<x<<"}"<<endl;
	for(int i=index+1;i<s.size();i++)//�̧ǱN�_�l��m�V�Ჾ 
	{
	    powerset(s,i,x+s[i]);//�ϥλ��j�N�Ӽh�����Цr���[�J��U�@�h 
	}
}
int main()
{
	string S;
	//cin>>S;
	S="abc";
	clock_t start=clock();//�p�ɶ}�l 
    powerset(S,-1,""); 
    clock_t stop=clock();//�p�ɶ}���� 
    //cout<<"��O�ɶ�(ms):"<<(double)(stop-start)<<endl;
}

