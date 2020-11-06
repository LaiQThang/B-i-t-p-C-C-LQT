#include <stdio.h>
using namespace std;
int main()
{
	int a,b,sn;
		printf("Xin moi nhap vao so thu nhat:");
		scanf("%d", &a);
		printf("Xin moi nhap vao so thu hai:");
		scanf("%d", &b);
		sn=(a>b) ? a : b;
		printf("So lon nhat la %d", sn);
	return 0;
}

