#include<stdio.h>
#include<string.h>
#include <time.h>
#include <stdlib.h>

int main () {
	
	int i,j,rakip,hamle_p,hamle_c,hamle_p2,konum_i,konum_j;
	char screen[3][3];
	int birinci_puan=0,ikinci_puan=0;
	int exit =0;
	printf("\t\t ##### X-O-X OYUNUNA HOGELDINIZ ##### \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			screen[i][j]=' ';
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j<2){
			
			printf(" %c | ",screen[i][j]);
			}
			else{
				printf(" %c ",screen[i][j]);

			}
		}
		printf("\n");
		if(i<2){
		
		printf(" ------------");
		}
		printf("\n");
	}
	
	
	printf("1)Bilgisayar ile oynamak istiyorum.\n2)Arkadasim ile oynamak istiyorum.\n");
	scanf("%d",&rakip);
	
	while(exit==0){
		while(exit==0 && rakip==1){
		printf("\n\n");
	
		printf("  \t\t\t");
		printf(" 1 | 2 | 3\n");
		printf("  \t\t\t");
		printf("-----------\n");
		printf("  \t\t\t");
		printf(" 4 | 5 | 6\n");
		printf("  \t\t\t");
		printf("-----------\n");
		printf("  \t\t\t");
		printf(" 7 | 8 | 9\n");
	
		printf("\t\t\t\t\tBilgisayarin Puani(O):%d \n\t\t\t\t\t Oyuncunun Puani(X):%d\n",birinci_puan,ikinci_puan);
		
		printf("Hamlenizi oynamak istediginiz yeri giriniz:\n");
		scanf("%d",&hamle_p);
		
	
		
			if(hamle_p==1){
				screen[0][0]='X';
			}
			else if(hamle_p==2){
				screen[0][1]='X';
			}
			else if(hamle_p==3){
				screen[0][2]='X';
			}
			else if(hamle_p==4){
				screen[1][0]='X';
			}
			else if(hamle_p==5){
				screen[1][1]='X';
			}
			else if(hamle_p==6){
				screen[1][2]='X';
			}
			else if(hamle_p==7){
				screen[2][0]='X';
			}
			else if(hamle_p==8){
				screen[2][1]='X';
			}
			else if(hamle_p==9){
				screen[2][2]='X';
			}
			
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if(j<2){
					
					printf(" %c | ",screen[i][j]);
					}
					else{
						printf(" %c ",screen[i][j]);
		
					}
				}
				printf("\n");
				if(i<2){
				
				printf(" ------------");
				}
				printf("\n");
			}	
			
			if((screen[0][0]=='X'&& screen[0][1]=='X'&& screen[0][2]=='X') || (screen[2][0]=='X'&& screen[2][1]=='X'&& screen[2][2]=='X') || (screen[1][0]=='X'&& screen[1][1]=='X'&& screen[1][2]=='X') ){
				exit=1;
				birinci_puan++;
				printf("KAZANDINIZ!\n");
			}
			else if((screen[0][0]=='X' && screen[1][1]=='X' && screen[2][2]=='X') || (screen[2][0]=='X' && screen[1][1]=='X' && screen[0][2]=='X')){
				exit=1;
				birinci_puan++;
				printf("KAZANDINIZ!\n");

			}
			else if((screen[0][0]=='X' && screen[1][0]=='X' && screen[2][0]=='X') || (screen[0][1]=='X' && screen[1][1]=='X' && screen[2][1]=='X') || (screen[2][0]=='X' && screen[2][1]=='X' && screen[2][2]=='X')){
				exit=1;
				birinci_puan++;
				printf("KAZANDINIZ!\n");

			}
			
			int devam;

			if(exit!=0){
				printf("TEKRAR OYNAMAK ISTER MISINIZ?\n");
				printf("1)EVET \t 2)HAYIR\n");
				scanf("%d",&devam);
				if(devam == 1){
					exit=0;
					for(i=0;i<3;i++){
						for(j=0;j<3;j++){
							screen[i][j]=' ';
						}
					}
				}
			}
			
			
			if(exit==0){
			
			hamle_c = 1+ rand() % 9;
			
			srand(time(NULL));
			konum_i=rand()%3;
			konum_j=rand()%3;
			
			while(screen[konum_i][konum_j]!=' ' ){
				srand(time(NULL));
				konum_i=rand()%3;
				konum_j=rand()%3;
			}
			
			if(hamle_c==1){
				screen[konum_i][konum_j]='O';
			}
			else if(hamle_c==2){
				screen[konum_i][konum_j]='O';
			}
			else if(hamle_c==3){
				screen[konum_i][konum_j]='O';
			}
			else if(hamle_c==4){
				screen[konum_i][konum_j]='O';;
			}
			else if(hamle_c==5){
				screen[konum_i][konum_j]='O';
			}
			else if(hamle_c==6){
				screen[konum_i][konum_j]='O';
			}
			else if(hamle_c==7){
				screen[konum_i][konum_j]='O';
			}
			else if(hamle_c==8){
				screen[konum_i][konum_j]='O';
			}
			else if(hamle_c==9){
				screen[konum_i][konum_j]='O';
			}
			
			if((screen[0][0]=='O'&& screen[0][1]=='O'&& screen[0][2]=='O') || (screen[2][0]=='O'&& screen[2][1]=='O'&& screen[2][2]=='O') || (screen[1][0]=='O'&& screen[1][1]=='O'&& screen[1][2]=='O') ){
				exit=
				1;
				ikinci_puan++;
				printf("BILGISAYAR KAZANDI!\n");
				
			}
			else if((screen[0][0]=='O' && screen[1][1]=='O' && screen[2][2]=='O') || (screen[2][0]=='O' && screen[1][1]=='O' && screen[0][2]=='O')){
				exit=1;
				ikinci_puan++;
				printf("BILGISAYAR KAZANDI!\n");

			}
			else if((screen[0][0]=='O' && screen[1][0]=='O' && screen[2][0]=='O') || (screen[0][1]=='O' && screen[1][1]=='O' && screen[2][1]=='O') || (screen[2][0]=='O' && screen[2][1]=='O' && screen[2][2]=='O')){
				exit=1;
				ikinci_puan++;
				printf("BILGISAYAR KAZANDI!\n");

			}

			}
			
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if(j<2){
					
					printf(" %c | ",screen[i][j]);
					}
					else{
						printf(" %c ",screen[i][j]);
		
					}
				}
				printf("\n");
				if(i<2){
				
				printf(" ------------");
				}
				printf("\n");
			}
		
		
		}
		
		while(exit==0&& rakip == 2){
			printf("\n\n");
		
			printf("  \t\t\t");
			printf(" 1 | 2 | 3\n");
			printf("  \t\t\t");
			printf("-----------\n");
			printf("  \t\t\t");
			printf(" 4 | 5 | 6\n");
			printf("  \t\t\t");
			printf("-----------\n");
			printf("  \t\t\t");
			printf(" 7 | 8 | 9\n");
		
			printf("\t\t\t\t\t1. Oyuncunun Puani:%d \n\t\t\t\t\t2. Oyuncunun Puani:%d\n",birinci_puan,ikinci_puan);
			
			printf("Birinci oyuncunun hamlesini oynamak istedigi yer:\n");
			scanf("%d",&hamle_p);
			
			if(hamle_p==1){
				screen[0][0]='X';
			}
			else if(hamle_p==2){
				screen[0][1]='X';
			}
			else if(hamle_p==3){
				screen[0][2]='X';
			}
			else if(hamle_p==4){
				screen[1][0]='X';
			}
			else if(hamle_p==5){
				screen[1][1]='X';
			}
			else if(hamle_p==6){
				screen[1][2]='X';
			}
			else if(hamle_p==7){
				screen[2][0]='X';
			}
			else if(hamle_p==8){
				screen[2][1]='X';
			}
			else if(hamle_p==9){
				screen[2][2]='X';
			}
			
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if(j<2){
					
					printf(" %c | ",screen[i][j]);
					}
					else{
						printf(" %c ",screen[i][j]);
		
					}
				}
				printf("\n");
				if(i<2){
				
				printf(" ------------");
				}
				printf("\n");
			}	
			
			if((screen[0][0]=='X'&& screen[0][1]=='X'&& screen[0][2]=='X') || (screen[2][0]=='X'&& screen[2][1]=='X'&& screen[2][2]=='X') || (screen[1][0]=='X'&& screen[1][1]=='X'&& screen[1][2]=='X') ){
				exit=1;
				birinci_puan++;
				printf("1. OYUNCU KAZANDI!\n");
			}
			else if((screen[0][0]=='X' && screen[1][1]=='X' && screen[2][2]=='X') || (screen[2][0]=='X' && screen[1][1]=='X' && screen[0][2]=='X')){
				exit=1;
				birinci_puan++;
				printf("1. OYUNCU KAZANDI!\n");

			}
			else if((screen[0][0]=='X' && screen[1][0]=='X' && screen[2][0]=='X') || (screen[0][1]=='X' && screen[1][1]=='X' && screen[2][1]=='X') || (screen[2][0]=='X' && screen[2][1]=='X' && screen[2][2]=='X')){
				exit=1;
				birinci_puan++;
				printf("1. OYUNCU KAZANDI!\n");

			}
			
			int devam;

			
			
			
			if(exit==0){
			
			printf("Ikinci oyuncunun hamlesini oynamak istedigi yer:\n");
			scanf("%d",&hamle_p2);
						
			if(hamle_p2==1){
				screen[0][0]='O';
			}
			else if(hamle_p2==2){
				screen[0][1]='O';
			}
			else if(hamle_p2==3){
				screen[0][2]='O';
			}
			else if(hamle_p2==4){
				screen[1][0]='O';
			}
			else if(hamle_p2==5){
				screen[1][1]='O';
			}
			else if(hamle_p2==6){
				screen[1][2]='O';
			}
			else if(hamle_p2==7){
				screen[2][0]='O';
			}
			else if(hamle_p2==8){
				screen[2][1]='O';
			}
			else if(hamle_p2==9){
				screen[2][2]='O';
			}
			
			if((screen[0][0]=='O'&& screen[0][1]=='O'&& screen[0][2]=='O') || (screen[2][0]=='O'&& screen[2][1]=='O'&& screen[2][2]=='O') || (screen[1][0]=='O'&& screen[1][1]=='O'&& screen[1][2]=='O') ){
				exit=1;
				ikinci_puan++;
				printf("2. OYUNCU KAZANDI!\n");
				
			}
			else if((screen[0][0]=='O' && screen[1][1]=='O' && screen[2][2]=='O') || (screen[2][0]=='O' && screen[1][1]=='O' && screen[0][2]=='O')){
				exit=1;
				ikinci_puan++;
				printf("2. OYUNCU KAZANDI!\n");

			}
			else if((screen[0][0]=='O' && screen[1][0]=='O' && screen[2][0]=='O') || (screen[0][1]=='O' && screen[1][1]=='O' && screen[2][1]=='O') || (screen[2][0]=='O' && screen[2][1]=='O' && screen[2][2]=='O')){
				exit=1;
				ikinci_puan++;
				printf("2. OYUNCU KAZANDI!\n");

			}

			}
			
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if(j<2){
					
					printf(" %c | ",screen[i][j]);
					}
					else{
						printf(" %c ",screen[i][j]);
		
					}
				}
				printf("\n");
				if(i<2){
				
				printf(" ------------");
				}
				printf("\n");
			}
			
			if(exit!=0){
				printf("TEKRAR OYNAMAK ISTER MISINIZ?\n");
				printf("1)EVET \t 2)HAYIR\n");
				scanf("%d",&devam);
				if(devam == 1){
					exit=0;
					for(i=0;i<3;i++){
						for(j=0;j<3;j++){
							screen[i][j]=' ';
						}
					}
				}
			}
			
		
			}
			
	}
	
	
	
	return 0;
}
