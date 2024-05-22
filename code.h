#include "TS.h"
#include "routine.h"


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



