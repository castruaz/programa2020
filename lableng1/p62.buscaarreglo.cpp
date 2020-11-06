// Busca un elemento en un arreglo introducido por el usuario
// Carlos Castaneda Ramirez
// 30 de Octubre de 2020

#include<stdio.h>
#define MAX 20

main() {
	int op;
	int nums[MAX], n=0, i, pos, b;
	
	do {
		printf("[1] Leer elementos del arreglo\n");
		printf("[2] Mostrar elementos del arreglo\n");
		printf("[3] Buscar elemento en el arreglo \n");
		printf("[4] Salir\n");
		printf("Selecciona una opción: "); scanf("%d", &op);
		switch(op) {
			case 1: 
				printf("Cuantos elementos ? ");scanf("%d", &n);
				if(n<=MAX) {
					for(i=0; i<n; i++) {
						printf("nums[%d] = ", i);
						scanf("%d", &nums[i]);
					}
				} else printf("No hay capacidad \n");
				break;
			case 2: 
				if(n!=0) {
					for(i=0; i<n; i++) {
						printf("nums[%d] = %d\n", i,nums[i]);
					}
				} else printf("El arreglo no tiene elementos\n");
				break;
			case 3: 
				if(n!=0) {
					pos=-1;
					printf("Dame el elemento a buscar ?"); scanf("%d", &b);
					for(i=0; i<n; i++) {
						if(nums[i]==b) pos=i; 
					}
					if(pos!=-1) printf("Encontrado en la posición %d\n", pos);
					else printf("No lo encontre\n");
				} else printf("El arreglo no tiene elementos\n");
				break;
			case 4: printf("Gracias hasta la proxima\n");break;
			default: printf("Opcion icorrecta\n");
		}
	} while(op!=4);
}
