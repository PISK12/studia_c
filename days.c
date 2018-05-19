#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year){
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				return 1;
			}else{return 0;}
		}else{return 1;}
	}else{return 0;}
}

int days(int year,int mounth){
	if(mounth==2){
		if(isLeapYear(year)){
			return 29;
		}else{return 28;}
	}else if(mounth==4||mounth==6||mounth==9||mounth==11){
		return 30;
	}else{return 31;}
}

int main(int argc, char*argv[]){
	int year=atof(argv[1]);
	int mounth=atof(argv[2]);
	printf("%i",days(year,mounth));
}