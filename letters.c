#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	FILE *input=fopen(argv[1],"r");
	int alfabet[26]={0};
	for(int a=0;a<26;a++){alfabet[a]=0;}

	char element;
	while(fscanf(input,"%c",&element)==1){
		int v;
		if(element<97){
			v=element-'A';
		}else{v=element-'a';}
		alfabet[v]++;
	}
	for(int a=0;a<26;a++){printf("%i ",alfabet[a]);}
}