#include <cstdio>
int main(){
	int n;
	int a;
	int sum=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%1d",&a);
		sum+=a;
	}
	printf("%d\n",sum);
	return 0;
}
