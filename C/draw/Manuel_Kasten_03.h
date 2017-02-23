unsigned char RD(int i,int j){
	static double k;k+=rand()/1./RAND_MAX;int l=k;l%=512;return l>255?511-l:l;
}

unsigned char GR(int i,int j){
	static double k;k+=rand()/1./RAND_MAX;int l=k;l%=512;return l>255?511-l:l;
}

unsigned char BL(int i,int j){
	static double k;k+=rand()/1./RAND_MAX;int l=k;l%=512;return l>255?511-l:l;
}