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
	while(cin>>in1>>in2) //�� ���� �Է�; 
	{
		if(in1<2||in2<2) //���࿡ �� ���� ���� 2���� ������ �׳� boring���; 
		{
			cout<<"Boring"<<endl;
			continue; //�׸��� ���� �Ǵܹ� ���; 
		}
	
		int save[]={0}; //�󸶳� ���� �𸣴� �������� ����; 
		int count=0; //i��� count , while�� �ȿ��� ��������; 
		while(in1%in2==0) //if i changed this parts , the code was run clearly; 
		{ //������ ���������� �ؿ��� �ϱ��; 
			save[count]=in1; //���࿡ �������� ���� ����; 
			count++; //���ϱ�; 
			in1/=in2; //�� ������; 
		}
		
		if(in1!=1) //�������� �׻� 1 �̿��ߵ�,�ƴϸ� ���� �ƴѰ���; 
		{
			cout<<"Boring"<<endl;
		}
		else //in1�� 1�̸� ��� 
		{
			for(int i=0;i<count;i++) //�� ���; 
			{
				cout<<save[i]<<" ";
			}
			cout<<"1"<<endl; //������ 1 ���;  
		}
	}
return 0;
}
	
	
	
	


