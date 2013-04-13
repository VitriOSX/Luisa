#include <stdio.h>
#include <stdlib.h>
#define N_MAX 100;



typedef enum{maschio, femmina} sesso;
typedef enum{amico, parente} tipologia;
typedef enum{conoscente, nonConoscente} stat;


typedef struct{

	int ID[100];        
        char nome;
        char cognome;
        int eta;
        sesso sex;
        tipologia type;

} invitato;

void inserisciPersona(invitato nuovo);

typedef struct{

	stat status;
	int Pab[2];
	float Cab;
	float Cba;
	
} knowledgeManager;

typedef struct{
	
	int IDregalo;
	char nomeTipo;
	float prezzo;
	char moreInfo;
        
} regalo;

        
int main(int argc, char *argv[])
{

	invitato nuovo;
	inserisciPersona(nuovo);
	
    	int sessoint;
	int tipoint;
	

	    	printf("\nSesso: \n1. = Maschio\n2. = Femmina\n\nInserisci il numero corrispondente la scelta:");
    		scanf("%d", &sessoint);

	if(sessoint==1){
		nuovo.sex=maschio;
    	}else{
		nuovo.sex=femmina;
	}		
    
    		printf("\nTipologia: \n1. = Amico\n2. = Parente\n\nInserisci il numero corrispondente la scelta:");
    		scanf("%d", &tipoint);
    
	if(tipoint==1){
    		nuovo.type=amico;
	}else{
		nuovo.type=parente;
	}

//STAMPA INFORMAZIONI;
    
	if(nuovo.sex==1){
	    printf("\nSesso: Maschio");
	    }else{
		printf("\nSesso: Femmina");
	}
	    
	if(nuovo.type==1){
	    printf("\nTipo: Amico\n\n");
	    }else{
		printf("\nTipo: Parente\n\n");
	}


	    //system("PAUSE");

	
   // return 0; 
  
}

void inserisciPersona(invitato nuovo)
{

    		printf("INSERIMENTO DATI PERSONA\n\n");
		printf("Nome:");
		scanf("%c",&nuovo.nome);
		printf("\nCognome:");
		scanf("%c",&nuovo.cognome);
		
		

}





















