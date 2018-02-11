#include<stdio.h> 
int a[6],b[6],t[6];
int MIN=1000000001;
int g[11],tt[6],te[6];
{
	int i, k=0;
	bool f=true;
	for( i=1;i<=10;i++)
		if	( g[i]==1 )
			{
				f=false;
				break;
			}
	if	( f )
		{
			int sum=tot[1]+tot[2]+tot[3]+tot[4]+tot[5]-t[1]-t[2]-t[3]-t[4]-t[5];
			if	( sum<MIN )
				{
					tt[1]=tot[1];tt[2]=tot[2];tt[3]=tot[3];tt[4]=tot[4];tt[5]=tot[5];
					MIN=sum;	
				}
		}					
	知道各种情况扫过去比较大小，之后就凉了。。。等待研究 
int main()  
{
	int i,j,k;
	int time;
	for( i=1;i<=5;i++ )
		scanf("%d%d%d",&t[i],&b[i],&a[i]);
	for( i=1;i<=10;i++)
		if	( i<6 )
			{
				g[i]=1;
				tt[i]=0;
				te[i]=0;
				if	( a[i]==0 )
					a[i]=10;
				if	( b[i]==0 )
					b[i]=10;
			}
		else
			g[i]=0;
	for(int i=1;i<=5;i++)
		printf("%d时，停靠在%d楼\n",tt[i],a[i]); 
	printf("%d",MIN); 
	return 0;
}
