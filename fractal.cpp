#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, k,ta, tb ,i, j, n;

	while(scanf("%d",&n)&&(n+1))
	{
		for(i = 0; i < pow(3,n-1); i++,printf("\n"))
        {
			for(j = 0; j < pow(3,n-1); j++)
			{
				k = n;
				ta = a = i;
				tb = b = j;
				s:;
				a /= pow(3,k-2);
				b /= pow(3,k-2);
				if((a==1&&a!=b)||(b==1&&a!=b))
				{
					printf(" ");
					continue;
				}
				a = (ta -= a*(pow(3,k-2)));
				b = (tb -= b*(pow(3,k-2)));
				k--;
				if(k)
					goto s;
				printf("X");
			}
        }
        printf("-\n");
	}
	return 0;
}
