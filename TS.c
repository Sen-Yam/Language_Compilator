#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define TABLE_SIZE 300

typedef struct Variable
{
    int State;
    char Name[20];
    char Type[20];
    char Code[20];
    char Val[20];
} Variable;

typedef struct Key
{
    int State;
    char Name[20];
    char Type[20];
} Key;

typedef struct Op
{
    int State;
    char Name[20];
    char Type[30];
} Op;

typedef struct HashNode
{
    Variable Var;
    struct HashNode *suivant;
} HashNode, *PHashNode;

typedef struct ListKey
{
    struct Key key;
    struct ListKey *suivant;
} ListKey, *PlistKey;

typedef struct ListOp
{
    struct Op op;
    struct ListOp *suivant;
} ListOp, *PlistOp;

 PHashNode HashTable[TABLE_SIZE] = {NULL};
PlistKey TeteKey = NULL;
PlistOp TeteOp = NULL;

int hashFunction(const char *key)
{
    unsigned int hash = 0;
    while (*key)
    {
        hash = (hash * 31) + *key;
        key++;
    }
    return hash % TABLE_SIZE;
}

void INSERTION_VAR(char Name[20], char Code[20], char Type[20], char Val[20])
{
    HashNode *P = (HashNode *)malloc(sizeof(HashNode));
    P->Var.State = 1;
    strcpy(P->Var.Name, Name);
    strcpy(P->Var.Type, Type);
    strcpy(P->Var.Code, Code);
    strcpy(P->Var.Val, Val);
    int index = hashFunction(Name);
    P->suivant = HashTable[index];
    HashTable[index] = P;
}
void INSERTION_KEY(char Name[20], char Type[20])
{
    PlistKey P;
    P = (ListKey *)malloc(sizeof(ListKey));
    P->key.State = 1;
    strcpy(P->key.Name, Name);
    strcpy(P->key.Type, Type);
    P->suivant = TeteKey;
    TeteKey = P;
}

void INSERTION_OP(char Name[20], char Type[20])
{
    PlistOp P;
    P = (ListOp *)malloc(sizeof(ListOp));
    P->op.State = 1;
    strcpy(P->op.Name, Name);
    strcpy(P->op.Type, Type);
    P->suivant = TeteOp;
    TeteOp = P;
}

void RECHERCHE_VAR(char Name[20], char Code[20], char Type[20], char Val[20])
{
    int index = hashFunction(Name);
    if (HashTable[index] != NULL)
    {
        bool Found = false;
        PHashNode P;
        P = HashTable[index];
        while (P != NULL && Found == false)
        {
            if (strcmp(Name, P->Var.Name) != 0)
            {
                P = P->suivant;
            }
            else
            {
                Found = true;
            }
        }
        if (Found == false)
        {
            INSERTION_VAR(Name, Code, Type, Val);
        }
    }
    else
    {
        INSERTION_VAR(Name, Code, Type, Val);
    }
}

void RECHERCHE_KEY(char Name[20], char Type[20])
{
    if (TeteKey != NULL)
    {
        bool Found = false;
        PlistKey P;
        P = TeteKey;
        while (P != NULL && Found == false)
        {
            if (strcmp(Name, P->key.Name) != 0)
            {
                P = P->suivant;
            }
            else
            {
                Found = true;
            }
        }
        if (Found == false)
        {
            INSERTION_KEY(Name, Type);
        }
    }
    else
    {
        INSERTION_KEY(Name, Type);
    }
}

void RECHERCHE_OP(char Name[20], char Type[20])
{
    if (TeteOp != NULL)
    {
        bool Found = false;
        PlistOp P;
        P = TeteOp;
        while (P != NULL && Found == false)
        {
            if (strcmp(Name, P->op.Name) != 0)
            {
                P = P->suivant;
            }
            else
            {
                Found = true;
            }
        }
        if (Found == false)
        {
            INSERTION_OP(Name, Type);
        }
    }
    else
    {
        INSERTION_OP(Name, Type);
    }
}

void AFFICHER_TABLE_VAR()
{

    printf("\n********************TABLE DES VARIABLES********************\n");
    printf(" _______________________________________________________________\n");
    printf("|   NomEntite   |  CodeEntite   |  TypeEntite   |   ValEntite   |\n");
    printf("|_______________|_______________|_______________|_______________|\n");
    int compteur = 0;
    int i;
    for (i = 0; i < TABLE_SIZE; i++)
    {
        PHashNode P = HashTable[i];
        while (P != NULL)
        {
            compteur++;
            printf("|%14s |%14s |%14s|%14s\n", P->Var.Name, P->Var.Code, P->Var.Type, P->Var.Val);
            P = P->suivant;
        }
    }
    if (compteur == 0)
    {
        printf("\n*****TABLE DES VARIABLES EST VIDE******\n");
    }
    printf("|_______________|_______________|_______________|\n");
    printf("\n*****************************************************************\n\n");
}

void AFFICHER_TABLE_KEY()
{
    if (TeteKey == NULL)
    {
        printf("\n*****TABLE DES KEYWORDS EST VIDE******\n");
    }
    else
    {
        PlistKey P;
        P = TeteKey;
        printf("\n*******TABLE DES KEYWORDS********\n");
        printf(" _______________________________\n");
        printf("|   NomEntite   |  TypeEntite   |\n");
        printf("|_______________|_______________|\n");
        while (P != NULL)
        {
            printf("|%14s |%14s |\n", P->key.Name, P->key.Type);
            P = P->suivant;
        }
    }
    printf("|_______________|_______________|\n");
    printf("\n*********************************\n\n");
}

void AFFICHER_TABLE_OP()
{
    if (TeteOp == NULL)
    {
        printf("\n*****TABLE DES OPERATEURS EST VIDE******\n");
    }
    else
    {
        PlistOp P;
        P = TeteOp;
        printf("\n**********TABLE DES OPERATEURS************\n");
        printf(" ________________________________________\n");
        printf("|   NomEntite   |       TypeEntite       |\n");
        printf("|_______________|________________________|\n");
        while (P != NULL)
        {
            printf("|%14s |%22s |\n", P->op.Name, P->op.Type);
            P = P->suivant;
        }
    }
    printf("|_______________|________________________|\n");
    ;
    printf("\n*****************************************\n\n");
}

int NOT_DECLARED(char Name[20])
{
    int index = hashFunction(Name);
    PHashNode P = HashTable[index];
    int Found = 0;
    int not_declared = 0;
    while (P != NULL && Found == 0)
    {
        if (strcmp(P->Var.Name, Name) == 0)
        {
            Found = 1;
            if (strcmp(P->Var.Type, "") == 0)
            {
                not_declared = 1;
            }
        }
        P = P->suivant;
    }
    return not_declared;
}

int DOUBLE_DEC(char Name[20])
{
    int Double = 0;
    int Found = 0;
    int index = hashFunction(Name);
    PHashNode P = HashTable[index];
    while (P != NULL && Found == 0)
    {
        if (strcmp(P->Var.Name, Name) == 0)
        {
            Found = 1;
            if (strcmp(P->Var.Type, "") != 0)
            {
                Double = 1;
            }
        }
    }
    return Double;
}

void INSERTION_TYPE_IDF(char Name[20], char Type[20])
{
    int index = hashFunction(Name);
    PHashNode P = HashTable[index];
    int Found = 0;
    PHashNode Q = NULL;
    while (P != NULL && Found == 0)
    {
        if (strcmp(P->Var.Name, Name) == 0)
        {
            Found = 1;
            Q = P;
        }
        else
        {
            P = P->suivant;
        }
    }
    if (Q != NULL)
    {
        strcpy(Q->Var.Type, Type);
    }
}




void INSERTION_VALUE_IDF(char Name[20], char Val[20])
{
    int index = hashFunction(Name);
    PHashNode P = HashTable[index];
    int Found = 0;
    PHashNode Q = NULL;
    while (P != NULL && Found == 0)
    {
        if (strcmp(P->Var.Name, Name) == 0)
        {
            Found = 1;
            Q = P;
        }
        else
        {
            P = P->suivant;
        }
    }
    if (Q != NULL)
    {
        strcpy(Q->Var.Val, Val);
    }
}



int GET_VALUE_IDF(char Name[20])
{   char Val[20];
int a=0;
    int index = hashFunction(Name);
    PHashNode P = HashTable[index];
    int Found = 0;
    PHashNode Q = NULL;

    


    while (P != NULL && Found == 0)
    {
        if (strcmp(P->Var.Name, Name) == 0)
        {
            Found = 1;
            Q = P;
        }
        else
        {
            P = P->suivant;
        }
    }
    if (Q != NULL)
    { 
        strcpy(Val,Q->Var.Val);
        a=atoi(Val);
           
        return a;
    }
    else {
        printf("Identifier %s not found in hash table.\n", Name);
        return 0; // Or some other appropriate error value
    }
}







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
		/* fprintf(file,"etiquette %d : ",i); */
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





















