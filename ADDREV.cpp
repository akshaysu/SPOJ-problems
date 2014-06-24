#include<stdio.h>
int int_rev(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
int main()
{
	int N=0;
	int first,second;//[1000];
	int result=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d%d",&first,&second);
		printf("%d\n",int_rev(int_rev(first)+int_rev(second)));
	}
}
