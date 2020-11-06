// Calcula la suma y promedio de n calificaciones en arreglo
// Carlos Castaneda Ramirez
// 30 de Octubre de 2020

#include<stdio.h>
#define MAX 60

main() {
	float cals[MAX];
	int n,i;
	float suma=0, promedio=0;
	
	printf("Cuantas calificaciones deseas ? ");scanf("%d",&n);
	if(n<=MAX) {
		// Leer calificaciones
		for(i=0; i<n; i++) {
			printf("Dame calificacion %d = ",i+1);
			scanf("%f", &cals[i]);
			suma = suma + cals[i];
		}
		// Mostrar las calificaciones introducidas por el usuario
		printf("\n");
		for(i=0; i<n; i++) printf("%.2f ", cals[i]);
		printf("\n\n");
		
		promedio = suma / n;
		printf("La suma de las calificaciones es     : %.2f\n", suma);
		printf("El promedio de las calificaciones es : %.2f\n", promedio);
		
	}
	else printf("El arreglo solo permite %d elementos", MAX);
	
}
