#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, i, c, acum=0, acump=0, nacum=0, ncum=0, tcum=0, con=0, mayor, menor;
	float PN, PROME;
	mayor=-1000;
	menor=1000;
	printf("Total numeros conjunto? ");
	scanf("%d", &n);

	for(i=0;i<n;i++){
		printf("Numero: ");
		scanf("%d", &c);
			
			if(c>0){
				
				acum++;
			}
				if(c<0){
					
					ncum++;
				}
				
				
					if(c%2==0){
					
					acump++;
				}
						if(c%2!=0){
					
						nacum++;
					}
							if(c>-30 && c<30 ){
								tcum++;
							}
							
								if(c>mayor){
									mayor=c;
								}
									if(c<menor){
										menor=c;
									}
		con+=c;						
	}
	printf("\n\nTotal de numeros positivos es: %d", acum);
	printf("\n\nTotal numeros negativos es: %d", ncum);
	printf("\n\nTotal de numeros pares es: %d", acump);
	printf("\n\nTotal de numeros impares es: %d", nacum);
	printf("\n\nLa cantindad de numeros entre -30 y 30 es: %d", tcum);
	printf("\n\nEl numero mayor es: %d", mayor);
	printf("\n\nEl numero menor es: %d", menor);

    PROME=con/n;
	printf("\n\nPromedio de numeros es: %.2f", PROME);
	PN=(ncum*100)/c;
	printf("\n\nPorcentaje numeros negativos es: %.2f", PN);
	printf("\n\n");
	system("PAUSE");
	return 0;
	
	
}
