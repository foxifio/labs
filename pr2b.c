#include <stdio.h>

#include <math.h>


	int main(void)

  {

	
	double x, h = 0.1, a = 1.1, b = 2, y = 1.0, d = 0.001, sum;
    
	int k;
	    
	printf("a:");
	    
	scanf("%le", &a);
	   
	printf("b:");
	    
	scanf("%le", &b);
	    
	printf("d:");
	    
	scanf("%le", &d);
	    
	printf("h:");
	    
	scanf("%le", &h);
	    
	
		
		for (x = a; x <= b; x += h)
	
	{
		
		k = 1;
	
		y = 1.0;

		sum = 0;
		
		
			
			while (fabs(y)>d)
		
		{
			
				y = ((1/(pow(2,k)))*sin(x/(pow(2,k))));
		
				sum += y;
	
				k++;
		
	}

		
printf("%.2f -> %.5f %f\n", x, sum, y);
	

	}

}

