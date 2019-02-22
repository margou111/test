#include <string>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "..\screen\screen.h"
using namespace std;

#include "activite.h" 
#include "eleve.h" 

const int maxActivites = 10;
const int maxEleves = 25;

//TActivite lesActivites[maxActivites];
//Indique le nombre d'activit�s dans le tableau. Pourra servir d'indice.
int nombreActivitesReelles=0;

int nombreElevesReels = 0;

char afficherMenu();

void ajouterActivite();
void afficherLesActivites();

void ajouterLesEleves();
void afficherLesEleves();
void inscrireUnEleve(string inCode, string inNom, string inPrenom);

void inscrireEleveActivite();
int rechercherEleve(string inEleveVoulu);
int rechercherActivite(string inActiviteVoulu);
void afficherLesInscriptions();

void main()
{
	char choix = ' ';
	while (choix != '0')
	{
		choix = afficherMenu();
		switch (choix)
		{
		case '1': ajouterActivite();
			break;
		case '2': afficherLesActivites();
			break;
		case '3': ajouterLesEleves();
			break;
		case '4': afficherLesEleves();
			break;
		case '5': inscrireEleveActivite();
			break;
		case '6': afficherLesInscriptions();
			break;
		}
	}
}

//----------------------------------------------------------------------------------------
char afficherMenu()
{
	char choix;
	ClrScr();
	Gotoxy(15, 4);
	cout << "1- Ajouter une activite";
	Gotoxy(15, 6);
	cout << "2- Afficher toutes les activites";
	Gotoxy(15, 8);
	cout << "3- Ajouter des eleves";
	Gotoxy(15, 10);
	cout << "4- Afficher les eleves";
	Gotoxy(15, 12);
	cout << "5- Inscrire un eleve a une activite";
	Gotoxy(15, 14);
	cout << "6- Afficher les inscriptions d'une activite";
	Gotoxy(15, 16);
	cout << "0- Arreter";
	Gotoxy(15, 18);
	cout << "Choix: ";
	cin >> choix;
	return choix;
}

//----------------------------------------------------------------------------------------
void ajouterActivite()
{
	string code;
	string titre;
	string responsable;
	ClrScr();
	cout << "Code activite: ";
	cin >> code;
	cout << "Titre: ";
	cin >> titre;
	cout << "Responsable: ";
	cin >> responsable;
	// ajoutez les instructions permettant de mettre les informations de la nouvelle activit� 
	// dans le tableau des activit�s
	// utilisez nombreActivites comme indice pour le tableau


	nombreActivitesReelles++;
}

//----------------------------------------------------------------------------------------
void afficherLesActivites()
{
	ClrScr();
	for (int cpt=0; cpt<nombreActivitesReelles; cpt++)
	{


	}
	_getch();
}

//----------------------------------------------------------------------------------------
void ajouterLesEleves()
{
	inscrireUnEleve("111","Laroche","Arthur");
	inscrireUnEleve("222","Cailloux","Fred");
	inscrireUnEleve("333","Cailloux","D�lima");
	inscrireUnEleve("444","Laroche","Bertha");
	inscrireUnEleve("555","Cailloux","Agathe");
	inscrireUnEleve("666","Laroche","Boumboum");
	inscrireUnEleve("777","Mirock","Pierre");
	inscrireUnEleve("888","Roche","On�zime");
	inscrireUnEleve("999","Roche","Alfreda");
	inscrireUnEleve("112","Cailloux","Dino");
}

//----------------------------------------------------------------------------------------
void inscrireUnEleve(string inCode, string inNom, string inPrenom)
{
	//ajoutez les instructions pour ajouter les valeurs re�ues en param�tres
	//dans le tableau des �l�ves. Utilisez nombreElevesReels comme indice. 


	nombreElevesReels++;
}

//----------------------------------------------------------------------------------------
void afficherLesEleves()
{
	ClrScr();
}

//----------------------------------------------------------------------------------------
void inscrireEleveActivite()
{
	string codeEleve;
	string codeActivite;
	int cptEleve;
	int cptActivite;
	ClrScr();
	cout << "Code de l'eleve a inscrire: ";
	cin >> codeEleve;
	cptEleve = rechercherEleve(codeEleve);
	if (cptEleve != maxEleves)
	{
		//appeler la fonction afficher() en lui envoyant l'objet �l�ve trouv�e

		cout << "Activite desiree: ";
		cin >> codeActivite;
		cptActivite = rechercherActivite(codeActivite);
		if (cptActivite != maxActivites)
		{
			//appeler la fonction afficher() en lui envoyant l'objet activit� trouv�e
			

			//en utilisant le bon �l�ve, appelez la m�thode pour l'inscrire � l'activit� choisie 


			cout << "inscription effectuee";
		}
		else
		{
			cout << "mauvaise activite";
		}
	}
	else
	{
		cout << "Eleve inexistant";
	}
	_getch();
}

//----------------------------------------------------------------------------------------
int rechercherEleve(string inCodeEleveVoulu)
{
	int cptEleve=0;
	bool trouve = false;
	while (trouve==false && cptEleve < maxEleves)
	{
		//compl�tez la condition permettant de v�rifier s'il s'agit du code de l'�l�ve d�sir�
		//if ()
		//{
		//	trouve = true;
		//}
		//else
		//{
		//	cptEleve++;
		//}
	}
	return cptEleve;
}

//----------------------------------------------------------------------------------------
int rechercherActivite(string inCodeActiviteVoulue)
{
	bool trouve = false;
	int cptActivite=0;
	while (trouve == false && cptActivite < maxActivites)
	{
		//compl�tez la condition permettant de v�rifier s'il s'agit du code de l'activit� d�sir�e
		//if ()
		//{
		//	trouve = true;
		//}
		//else
		//{
		//	cptActivite++;
		//}
	}
	return cptActivite;
}

//----------------------------------------------------------------------------------------
void afficherLesInscriptions()
{
	string activite;
	ClrScr();
	cout << "Code de l'activite: ";
	cin >> activite;
	//ajoutez la boucle permettant de trouver et de faire afficher
	//tous les �l�ves inscrits � l'activit� d�sir�e
	//attention: il est possible que l'�l�ve ne soit inscrit � aucune activit� alors le pointeur sera � NULL


	_getch();
}


