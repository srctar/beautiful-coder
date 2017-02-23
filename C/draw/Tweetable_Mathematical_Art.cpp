/**
* 作者：烧茄子
* 链接：https://www.zhihu.com/question/30262900/answer/48741026
* 来源：知乎
* 每个头文件就是每个参赛者的命名。 更改引用即可。 当前文件夹下还有图片的展示
*/

// NOTE: compile with g++ filename.cpp -std=c++11

#include <iostream>
#include <cmath>
#include <cstdlib>
#define DIM 1024
#define DM1 (DIM-1)
#define _sq(x) ((x)*(x)) // square
#define _cb(x) abs((x)*(x)*(x)) // absolute value of cube
#define _cr(x) (unsigned char)(pow((x),1.0/3.0)) // cube root

//#include "Eric_Tressler.h"
//#include "Manuel_Kasten_02.h"
//#include "Martin_Büttner_01.h"
//#include "Martin_Büttner_03.h"
//#include "githubphagocyte_01.h"
//#include "Manuel_Kasten_01.h"
//#include "Manuel_Kasten_03.h"
//#include "Martin_Büttner_02.h"
//#include "githubphagocyte_02.h"

unsigned char GR(int,int);
unsigned char BL(int,int);

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

void pixel_write(int,int);
FILE *fp;

int main(){
	fp = fopen("MathPic.ppm","wb");
	fprintf(fp, "P6\n%d %d\n255\n", DIM, DIM);
	for(int j=0;j<DIM;j++) {
		for(int i=0;i<DIM;i++) {
			pixel_write(i,j);
		}
	}
	fclose(fp);
	return 0;
}

void pixel_write(int i, int j) {
	static unsigned char color[3];
	color[0] = RD(i,j)&255;
	color[1] = GR(i,j)&255;
	color[2] = BL(i,j)&255;
	fwrite(color, 1, 3, fp);
}