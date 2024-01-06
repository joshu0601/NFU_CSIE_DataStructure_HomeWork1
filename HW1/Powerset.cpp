#include<iostream>
#include <string>
#include <ctime>
using namespace std;
void powerset(string s,int index,string x)
{
	if(s.length()==index)//指標到最後遞迴停止 
	{
		return;
	}
	cout<<"{"<<x<<"}"<<endl;
	for(int i=index+1;i<s.size();i++)//依序將起始位置向後移 
	{
	    powerset(s,i,x+s[i]);//使用遞迴將該層的指標字元加入到下一層 
	}
}
int main()
{
	string S;
	//cin>>S;
	S="abc";
	clock_t start=clock();//計時開始 
    powerset(S,-1,""); 
    clock_t stop=clock();//計時開結束 
    //cout<<"花費時間(ms):"<<(double)(stop-start)<<endl;
}

