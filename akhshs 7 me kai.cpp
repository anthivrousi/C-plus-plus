#include <stdio.h>
int main(){
	int k1,k2,k3,x,y,z;
	float mo13;
	
	printf("Dose ton prwto arithmo:\n");
	scanf("%d", &x);
	
	printf("Dose ton deutero arithmo:\n");
	scanf("%d", &y);
	
	printf("Dose ton trito arithmo:\n");
	scanf("%d", &z);
	
	printf("x: %d, y: %d, z: %d\n", x,y,z);
	
		if(x>y) && (x>z) && (y>z);{
			    k3=x;
				k2=y;
				k1=z;
			}
				
		    if else (x>y) && (x>z) && (y<z){
		    	k3=x;
				k2=z;
				k1=y;
			}
			
			   if else (x>y) && (x<z) && (z>y); {
			   		k3=z;
			        k2=x;
			        k1=y;
			   }
			   
			     if  (y>x) && (y>z) && (x>z); {
			     	k3=y;
				    k2=x;
				    k1=z;
			     	
				 }
				 
				 if else (y>x) && (y>z) && (z>x); {
				 	k3=y;
				    k2=z;
				    k1=x;
				 }
				   if else (y>x) && (z>y) && (x>z); {
				   	
				   k3=z;
			       k2=y;
			       k1=x;
			   }
			   
			   	printf("%d < %d < %d\n", k1, k2, k3);
	mo13=(k1+k3)/2;
	
	printf("O mesos oros einai %.2f\n", mo13);
	if(mo13>k2)
		printf("O mesos oros einai megaluteros apo ton mesaio arithmo: %.2f > %d\n", mo13, k2);
	else
		printf("Error!\n");
		
	return(0);		
}
			   
			   
