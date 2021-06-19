#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*durand kerner*/
int main()
{
	double a[20],r=-99,r0,yh,yb;
	int d,i,b[20],count,N;
	printf("enter the degree of polynomial(2-19)\n");
	scanf("%d", &d);
	printf("enter the constants\n");
	for (i=0;i!=d+1;i++){
		scanf("%lf", &a[i]);
		b[i]=d-i;
	}
	while (d!=0){
		count=0;
		while (1)
		{
			r0=r;
			yh=0;
			for (i=0;i!=d+1;i++){
				yh=yh+a[i]*pow(r,b[i]);
			}
			yb=0;
			for (i=0;i!=d+1;i++){
				yb=yb+a[i]*b[i]*pow(r,b[i]-1);
			}
			r=r-yh/yb;
			count=count+1;
			if (r<r0+0.000000000001&&r>r0-0.000000000001){
				printf("%lf iteration:%d\n", r,count);
				break;
			}
			if (count>99){
				break;
			}
		}
		d--;
		if (count>99)break;
		for (i=0;i!=d+1;i++)b[i]=d-i;
		for (i=1;i!=d+1;i++){
			a[i]=a[i]+a[i-1]*r;
		}
		r0=r;
	}
	return 0;
}

