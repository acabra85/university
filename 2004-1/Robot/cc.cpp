include <stdio.h>
#include <stdlib.h>
#define MAX_FIL 6
#define MAX_COL 5

typedef struct despalzamiento{
	int dx;
	int dy;
} Movimiento;

typedef struct celdatab{
	Movimiento mov;
	int visitado;
} Celda;

void llenar(Celda tablero[MAX_FIL][MAX_COL]);
void posinicio();
void inicializarvisitado(Celda tablero[MAX_FIL][MAX_COL]);
int paso(Celda tablero[MAX_FIL][MAX_COL]);
int movimientovalido(Celda tablero[MAX_FIL][MAX_COL]);


main(){
  Celda tablero[MAX_FIL][MAX_COL];
  int guia[MAX_FIL][MAX_COL] = {{},{},{},{},{},{},{}}
  inicializarvisitado(tablero);
  //llenar(tablero);
}
 
 
void llenar(Celda tablero[MAX_FIL][MAX_COL]){
	int h;
	int b;
	for(h=0;h<MAX_COL;h++){
      printf("Ud. va a llenar la fila %d:\n", h+1);
	  for(b=0;b<MAX_FIL;b++){
		  printf("Casilla %d de la columna %d", b+1, h+1);
		  printf("Desplazamiento vertical y horizontal:");
		  scanf("%d%d", &tablero[h][b].mov.dx, &tablero[h][b].mov.dy);
	  }
	}
}

void posinicio(){
  int ve;
  int ho;
  printf("Digite las coordendas de la posicion Y X:");
	scanf("%d%d", &ve, &ho);
}

int paso(Celda tablero[MAX_FIL][MAX_COL], int x, int y){
	if(tablero[x][y].visitado==1){
     return 1;
	}
	else{
		return 0;
	}
}

void inicializarvisitado(Celda tablero[MAX_FIL][MAX_COL]){
	int b;
	int h;
	for(h=0;h<MAX_FIL;h++){
		for(b=0;b<MAX_COL;b++){
			tablero[h][b].visitado=0;
		}
	}
}
int movimientovalido(Celda tablero[MAX_FIL][MAX_COL], int ve, int ho){
   if((ve>MAX_FIL || ve<0) || (ho>MAX_COL || ho>MAX_COL)){
     return 0;
   }
   else{
     return 1;
   }
   return 0;
}
		
		
		
		
