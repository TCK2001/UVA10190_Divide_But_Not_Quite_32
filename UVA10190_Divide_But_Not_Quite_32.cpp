/*
Sample Input
125 5
30 3
80 2
81 3
Sample Output
125 25 5 1
Boring!
Boring!
81 27 9 3 1
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
/*
int main()
{
	long long int in1=0,in2=0;
	int i;
	
	while(cin>>in1>>in2)
	{
		if(in1<2||in2<2)
		{
			cout<<"Boring"<<endl;
			continue;
		}
		int check=0;
		int count=0;
		long long int re=0;
		re=in1;
		while(in1>2||in2>2&&in1>in2)
		{
			re/=in2;
			count++;
			if(re==1)
			{
				break;
			}
		}
		int save[count]={0};
		if(in1<2||in2<2||in1<in2)
		{
			check=0;
		}
		else
		{
			for(i=0;i<=count;i++)
			{	
				save[i]=pow(in2,i);	
				if(in1==pow(in2,i))
				{
					check=1;
				}
			}	
		}
	
		if(check==1)
		{
			for(i=count;i>0;i--)
			{
				cout<<save[i]<<" ";
			}
			cout<<"1"<<endl;
		}
		else if(check==0)
		{
			cout<<"Boring!"<<endl;
		}
	}
return 0;
}
*/
//==================================================== I don't know where my code is wrong. 
	
int main()
{
	int in1,in2;
	while(cin>>in1>>in2) //두 값을 입력; 
	{
		if(in1<2||in2<2) //만약에 두 값이 각각 2보다 작으면 그냥 boring출력; 
		{
			cout<<"Boring"<<endl;
			continue; //그리고 다음 판단문 재생; 
		}
	
		int save[]={0}; //얼마나 쓸지 모르니 공백으로 정의; 
		int count=0; //i대신 count , while문 안에서 쓸꺼여서; 
		while(in1%in2==0) //if i changed this parts , the code was run clearly; 
		{ //무조건 나눠질때만 밑에꺼 하기로; 
			save[count]=in1; //만약에 나눠지면 값을 저장; 
			count++; //더하기; 
			in1/=in2; //값 나누기; 
		}
		
		if(in1!=1) //마지막은 항상 1 이여야됨,아니면 답이 아닌거임; 
		{
			cout<<"Boring"<<endl;
		}
		else //in1이 1이면 출력 
		{
			for(int i=0;i<count;i++) //답 출력; 
			{
				cout<<save[i]<<" ";
			}
			cout<<"1"<<endl; //마지막 1 출력;  
		}
	}
return 0;
}
	
	
	
	


