#include <iostream>
#include <math.h>

main(){
	
    printf("\tCalculadora de + y -");
    
    int n1=0,n2=0,res=0;
    
	printf("\n\nIntroduce un numero: ");
	scanf("%d", &n1);
	
	printf("\nIntroduce otro numero: ");
	scanf("%d", &n2);
	
	printf("\n1. SUMA");
	printf("\n2. RESTA");
	
		printf("\nElige una opcion:");
	scanf("%d", &res);
	
	switch(res){
	
	case 1: res = n1 + n2;
	printf("Tu resultado es: %d", res);
	break;
	
	case 2: res = n1 - n2;
	printf("Tu resultado es: %d", res);
	break;
}

}