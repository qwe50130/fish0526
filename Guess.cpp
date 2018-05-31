#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
using namespace std;
int main() 
{
	char a[4];
	int no1;
	srand((unsigned)time(NULL));
	no1=rand();
	int no2=rand()%10;
	A2:
	int no3=rand()%10;
	A3:
	int no4=rand()%10;
	A4:
	int no5=rand()%10;
	if(no3==no2)
	{
		goto A2;
	}
	if(no4==no2||no4==no3)
	{
		goto A3;
	}
	if(no5==no2||no5==no3||no5==no4)
	{
		goto A4;
	}
	int ans=no2*1000+no3*100+no4*10+no5;
	char b[4];
	sprintf(a,"%d",ans);
	A1:
	cout<<"輸入數字\n";
	cin>>b;
	int c=0;
	int d=0;
	if(a[0]==b[0])
	{
		c++;
	}
	if(a[1]==b[1])
	{
		c++;
	}
	if(a[2]==b[2])
	{
		c++;
	}
	if(a[3]==b[3])
	{
		c++;
	 }
	if(a[0]==b[1]||a[0]==b[2]||a[0]==b[3]) 
	{
		d++;
	}
	if(a[1]==b[0]||a[1]==b[2]||a[1]==b[3])
	{
		d++;
	}
	if(a[2]==b[0]||a[2]==b[1]||a[2]==b[3])
	{
		d++;
	}
	if(a[3]==b[0]||a[3]==b[1]||a[3]==b[2])
	{
		d++;
	}
	cout<<c<<"A"<<d<<"B\n"; 
	if(c!=4)
	{
		goto A1;
	}
	if(c==4)
	{
		cout<<"恭喜答對！";
	}
	return 0;
 } 
