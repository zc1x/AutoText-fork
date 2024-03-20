#include<stdio.h>
//int min(int n){
//	scanf("请输入n的值%d\n",&n);
//	int i;
//	int a[i],min=a[1];
//	for(i=1;i<=n;i++){
//	scanf("%d",&a[i]);
//	if(min<a[i])
//	min=a[i];
//	}
//	printf("min=%d",min);
//}
int main(){
	int n;
	scanf("请输入n的值%d\n",&n);
	int i,min;
	int a[1000];
	for(i=1;i<=n;i++){
	  scanf("%d",&a[i]);
	printf("%d\n",a[i]);}

	return 0;
}
//int main()
//{
//	int n, i, ai, m, a[1000];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &ai);
//		a[i] = ai;
//	}
//	m = a[0];
//	for (i = 0; i < n; i++)
//	{
//		if (m > a[i])
//		{
//			m = a[i];
//		}
//	}
//	printf("%d\n", m);
//	return 0;
//}



