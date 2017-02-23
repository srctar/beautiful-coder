unsigned char RD(int i,int j){
	#define D DIM
	#define M m[(x+D+(d==0)-(d==2))%D][(y+D+(d==1)-(d==3))%D]
	#define R rand()%D
	#define B m[x][y]
	return(i+j)?256-(BL(i,j))/2:0;
}

unsigned char GR(int i,int j){
	#define A static int m[D][D],e,x,y,d,c[4],f,n;if(i+j<1){for(d=D*D;d;d--){m[d%D][d/D]=d%6?0:rand()%2000?1:255;}for(n=1
	return RD(i,j);
}

unsigned char BL(int i,int j){
	A;n;n++){x=R;y=R;if(B==1){f=1;for(d=0;d<4;d++){c[d]=M;f=f<c[d]?c[d]:f;}if(f>2){B=f-1;}else{++e%=4;d=e;if(!c[e]){B=0;M=1;}}}}}return m[i][j];
}