#include <stdio.h>
using namespace std;
int main()
{
	float dl,dn,cc,dt;
			printf("Hello ADC STUDIO \n");
			printf("Xin moi nhap vao do dai day lon, day nho va chieu cao cua hinh thang: \n");
				scanf("%f %f %f", &dl , &dn, &cc);
		dt= ((dl+dn)*cc)/2;
			printf("Dien tich hinh thang la %0.2f", dt);
return 0;
}

