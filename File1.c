#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
typedef struct{
	char nom[100];
	char prenom[100];
	char adresse[100];
	char classe[100];
}coordonnees;


//void sauvegarder (coordonnees *tab, int *nbeleve){
	//int i = 0;
	//FILE *sauvegarde;
	//fopen("C:\Users\Thomas\Desktop\tp1 ex 3 final\\sauvegarde.txt", "r+");
	//while (i != EOF){
		//putc(i, sauvegarde);
	//}
		//fclose(sauvegarde);

//}


void afficher_eleve(coordonnees *tab, int *nbeleve){
	int i = 0;
	printf("afficher nbeleve : %d", *nbeleve);
	while (i<*nbeleve)
		{
		  printf("\n\neleve n.%d", i+1 );
			printf("\nnom : %s", tab[i].nom);
			printf("\nprenom : %s", tab[i].prenom);
			printf("\nnadresse : %s", tab[i].adresse);
			printf("\nclasse : %s", tab[i].classe);
			i = i+1;
		}

}

void enregistrer_eleve(coordonnees *tab, int *nbeleve){
	//FILE *sauvegarde_eleve;
	//sauvegarde_eleve = fopen("C:\Users\Thomas\Desktop\C-C++\C\Chapitre 1\TP1\exercice 3", "r+");

  printf("\n\nil y a %d eleve(s)", *nbeleve);
  printf("\n\nnom de famille de l'eleve ? ");
  scanf("%s", tab[*nbeleve].nom);

  printf("\n\nprenom de l'eleve ? ");
  scanf("%s", tab[*nbeleve].prenom);
  printf("\nl'eleve s'appelle %s %s\n", tab[*nbeleve].prenom, tab[*nbeleve].nom);

  printf("\n\nadresse de l'eleve ? ");
  fflush(stdin);
  gets(tab[*nbeleve].adresse);
  printf("\nl'eleve habite a l'adresse suivante :  %s\n", tab[*nbeleve].adresse);

  printf("\nclasse de l'eleve ? ");
  scanf("%s", tab[*nbeleve].classe);
  printf("%s %s habite %s et etudie en %s\n", tab[*nbeleve].prenom, tab[*nbeleve].nom, tab[*nbeleve].adresse, tab[*nbeleve].classe);

	*nbeleve = *nbeleve+1;
	printf("\n\nnbeleve = %d", *nbeleve);
  }

void menu (coordonnees *tab, int *nbeleve){
	int i;
   printf ("\n\nvoulez vous rentrer un nouvel eleve?");
   printf ("\n1-oui \n2-non ");
   printf ("\n3-afficher les eleves");
   //printf ("\n4-sauvegarder la liste \nreponse?\n");
   scanf("%d", &i);

switch(i){
	case 1 :
		enregistrer_eleve(tab, nbeleve);
   break;

   case 2 :
		printf("\nok\n");
		exit();
   break;

   case 3 :
		afficher_eleve(tab, nbeleve);
   break;

   //case 4 :
		//sauvergarder(tab, nbeleve);
   //break;
}

}


int _tmain(int argc, _TCHAR* argv[])
{
	coordonnees tab [100];
	int nbeleve = 0;
	int boucle = 0;

	printf("wlecmoe to teh sfotware\n");

	 do {
		menu (tab, &nbeleve);
		 } while (boucle < 10);


	system("pause");
	return 0;
}
