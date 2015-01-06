typedef struct despalzamiento{
	int dx;
	int dy;
}movimiento;

typedef struct celdatab{
	movimiento mov;
	int visitado;
}celda;


void llenar(celda tablero[MAX_FIL][MAX_COL]){
	int h;
	int b;
	for(h=0;h<=MAX_COL;h++){
      printf("Ud. va a llenar la fila %d:\n", h+1);
	  for(b=0;b<=MAX_FIL;b++){
		  printf("Casilla %d de la columna %d", b+1, h+1);
		  printf("Desplazamiento vertical y horizontal:");
		  scanf("%d%d", &tablero[h][b].mov.dx, &tablero[h][b].mov.dy);
	  }
	}
}

void posinicio(){
	printf("Digite las coordendas de la posicion Y X:");
	scanf("%d", &ve, &ho);
}

int paso(celda tablero[MAX_FIL][MAX_COL], int x, int y){
	if(tablero[x][y].visitado==1){
     printf("El robot ya paso por aca");
     return 1;
	}
	else{
		printf("El robot no ha pasado");
		return 0;
	}
	return 0;
}

void inicializarvisitado(celda tablero[MAX_FIL][MAX_COL]){
	int b;
	int h;
	for(h=0;h<MAX_FIL;h++){
		for(b=0;b<MAX_COL){
			tablero[h][b].visitado=0;
		}
	}
}

if(tablero[ve[ho].mov.dx==-1 && tablero[ve][ho].mov.dy==-1){
	if(ve-1>=MAX_FIL && ho-1>=MAX_COL){
		if(tablero[ve-1][ho-1].visitado==0){
		}