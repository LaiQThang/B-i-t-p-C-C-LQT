#include <stdio.h>
using namespace std;
int main()
{
	printf("Hello ADC STUDIO \n");
	int thu;
		printf("Xin moi nhap vao thu trong tuan:");
		scanf("%d", &thu);
			switch (thu) {
	 	case 2: printf("Thu hai"); break;
		case 3: printf("Thu ba"); break;
		case 4: printf("Thu tu"); break;
		case 5: printf("Thu nam"); break;
		case 6: printf("Thu sau"); break;
		case 7: printf("Thu bay"); break;
		case 8: printf("Chu nhat"); break;
			default: printf("Khong co thu trong tuan"); break;
		}
	return 0;
}

