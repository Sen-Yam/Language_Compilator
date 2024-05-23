#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
/* #include "TS.c" */
extern int qc;
extern char Chaine[20];
typedef struct quadr{
    char operateur[20];
    char operande1[20];
    char operande2[20];
    char resultat[20];
    struct quadr* suivant;
}quadr,*pquadr;

 pquadr Tete=NULL;
 int i=1;
extern int fin_if;
extern int qc_if[10000];
extern int debw[10000];
extern int finw[10000];
extern int bzw[10000];
extern int brw[10000];
extern int K;
extern int j;
extern int J;

void AJOUTER_QUAD(char Op[20] , char Op1[20] , char Op2[20],char Res[20]) {
   
   /*  printf(" oppppp%s",Op2);
    printf(" oppppp%s",Res); */
    if(Tete==NULL) {
    Tete=(quadr*)malloc(sizeof(quadr));
    strcpy(Tete->operateur,Op);
    strcpy(Tete->operande1,Op1);
    strcpy(Tete->operande2,Op2);
    strcpy(Tete->resultat,Res);
    Tete->suivant=NULL;
    }
    else {
           
    pquadr P;
    P=(quadr*)malloc(sizeof(quadr));
    strcpy(P->operateur,Op);
    strcpy(P->operande1,Op1);
    strcpy(P->operande2,Op2);
    strcpy(P->resultat,Res);
    pquadr Q;
    Q=Tete;
    while(Q->suivant!=NULL){
        Q=Q->suivant;
    }
    Q->suivant=P;
    P->suivant=NULL;
    }
    qc++;
    i=qc;
} 

void MODIFIER_CHAMP(int Champ , pquadr P,char Val[20]) {
 if(P!=NULL) {
       switch(Champ) {
        case 1:strcpy(P->operateur,Val);  break;
        case 2:strcpy(P->operande1,Val);  break;
        case 3: strcpy(P->operande2,Val); break;
        case 4:strcpy(P->resultat,Val);  break;
        default:;
    }
 }
}

void MODIFIER_QUAD(int Pos,int Champ , char Val[20]){
    int i;
    pquadr P;
    if(Pos==1) {
        MODIFIER_CHAMP(Champ,Tete,Val);
    } else {
        P=Tete;
        i=1;
        while(i<Pos && P!=NULL) {
                P=P->suivant;
                i++;
        }
        if(P!=NULL) {
            
            MODIFIER_CHAMP(Champ,P,Val);
        }
    }
}


 void AFFICHER_QUAD() {
    printf("\n\n ***************LES QUADRUPLES SONT :***************\n");
    pquadr P=Tete;
    int K=1;
    while(P!=NULL && K<=i) {
        printf("\n%d - (%s , %s , %s , %s)\n",K,P->operateur , P->operande1,P->operande2,P->resultat);
        P=P->suivant;
        K++; 
    }
     printf("\n********************************************************\n\n");
} 

void assembler(){
		FILE *file;
		file = fopen("Assembly.asm", "w");
		if (file == NULL) {
      printf("Impossible d'ouvrir le fichier.\n");
       
   }
    pquadr Q=NULL;
   
   fprintf(file, "DATA SEGMENT \n");

    int i;
    for (i = 0; i < TABLE_SIZE; i++)
    {
        PHashNode P = HashTable[i];
        while (P != NULL)
        {
            if(strcmp(P->Var.Type,"INTEGER")==0){fprintf(file,"%s DD ?\n",P->Var.Name);}
				if(strcmp(P->Var.Type,"FLOAT")==0){ fprintf(file,"%s DW ?\n",P->Var.Name);}

            P = P->suivant;
        }
    }

	fprintf(file,"DATA ENDS\n");
	fprintf(file,"CODE SEGEMENT\n");
	fprintf(file,"ASSUME CS:CODE, DS:DATA\n");
	fprintf(file,"MAIN :\n");
	fprintf(file,"MOV AX,DATA\n");
	fprintf(file,"MOV DS,AX\n");
    Q=Tete;
	while(Q!=NULL){
		fprintf(file,"etiquette %d : ",i);
		if(strcmp(Q->operateur,"+")==0){

					fprintf(file,"MOV AX, %s\n",Q->operande1);
					fprintf(file,"ADD AX, %s\n",Q->operande2);
				
			

	}
		if(strcmp(Q->operateur,"-")==0){
		fprintf(file,"MOV AX, %s\n",Q->operande1);
					fprintf(file,"SUB AX, %s\n",Q->operande2);

	}
	if(strcmp(Q->operateur,"*")==0){
	fprintf(file,"MOV AX, %s\n",Q->operande1);
					fprintf(file,"MUL AX, %s\n",Q->operande2);

	}
	if(strcmp(Q->operateur,"/")==0){

	fprintf(file,"MOV AX, %s\n",Q->operande1);
	fprintf(file,"DIV AX, %s\n",Q->operande2);}
    
    	if(strcmp(Q->operateur,"=")==0){
		/* A=1 : mov ax,1  mov A,Ax */
			fprintf(file,"MOV AX, %s\n",Q->operande1);

		fprintf(file,"MOV %s, AX\n",Q->resultat);
	}
                    

	if(strcmp(Q->operateur,"BR")==0){
			fprintf(file,"JMP etiquette %s\n",Q->operande1);
	}
	if(strcmp(Q->operateur,"BG")==0){
			fprintf(file,"CMP AX, 0\n");
			fprintf(file,"JG etiquette %s\n",Q->operande1);
	}
	if(strcmp(Q->operateur,"BGE")==0){
			fprintf(file,"CMP AX, 0\n");
			fprintf(file,"JGE etiquette %s\n",Q->operande1);
	}
	if(strcmp(Q->operateur,"BL")==0){
			fprintf(file,"CMP AX, 0\n");
			fprintf(file,"JL etiquette %s\n",Q->operande1);
	}
	if(strcmp(Q->operateur,"BLE")==0){
			fprintf(file,"CMP AX, 0\n");
			fprintf(file,"JLE etiquette %s\n",Q->operande1);
	}
	if(strcmp(Q->operateur,"BZ")==0){
			fprintf(file,"CMP AX, 0\n");
			fprintf(file,"JE etiquette %s\n",Q->operande1);
	}
	if(strcmp(Q->operateur,"BNZ")==0){
			fprintf(file,"CMP AX, 0\n");
			fprintf(file,"JNE etiquette %s\n",Q->operande1);
	}

    Q=Q->suivant;
	}
	fprintf(file,"FIN :\n");
	fprintf(file,"MOV AH,4CH\n");
	fprintf(file,"INT 21h\n");
	fprintf(file,"CODE ENDS\n");
	fprintf(file,"END MAIN\n");

	fclose(file);
}





















