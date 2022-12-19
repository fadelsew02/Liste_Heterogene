#include<iostream>
#include "header.hpp"

using namespace std;

// Document:: Document(){
//     static int num =0;
//     cout<<"\n\t\t Le numero du nouvel objet est :" << ++num  ;
// }

/*----------------------Lecture au clavier des informations à enregistrées-----------------*/
void Document::lire(){      
    cout << " \n\n\t\t ---> Auteur: ";
    cin .ignore();
    getline(cin , auteur);
    cout << " \n\n\t\t ---> Titre: ";
    cin .ignore();
    getline(cin ,titre);
    cout << "\n\n\t\t ---> Annee: ";
    cin >> annee ;        
}

/*------------------------ Définitions des constructeurs de chaque classe dérivée ------------------*/

// Livre::Livre(){}

// Journal::Journal(){
//     cout << "\n\n\t\tVous renseignez les informations sur un article de journal"; 
// }

// Conference::Conference(){
//     cout << "\n\n\t\tVous renseignez les informations sur un article de conference";
// }

/*-------------------------------------------------------------------------------*/

/*---------------------- Lecture au clavier des informations à enregistrées -----------------*/

void Livre::lire(){
    cout << "\n\n\t\tVous renseignez les informations sur un livre";
    Document::lire();
    cout << "\n\n\t\t ---> ISBN:";
    cin >> ISBN ;
}

void Journal::lire(){
    cout << "\n\n\t\tVous renseignez les informations sur un article de journal"; 
    Document::lire();
    cout << "\n\n\t\t ---> Nom de l'editeur:";
    cin .ignore();
    getline(cin , Nom_editeur);
    cout << "\n\n\t\t ---> Numero de page du debut:";
    cin >> numero_de_page_debut ;
    cout << "\n\n\t\t ---> Numero de page de la fin:";
    cin >> numero_de_page_fin ;
    cout << "\n\n\t\t ---> Numero de volume:";
    cin >> numero_de_volume;
}

void Conference::lire(){
    cout << "\n\n\t\tVous renseignez les informations sur un article de conference";
    Document::lire();
    cout << "\n\n\t\t ---> Nom de l'editeur:";
    cin .ignore();
    getline(cin , Nom_editeur);
    cout << "\n\n\t\t ---> Numero de page du debut:";
    cin >> numero_de_page_debut ;
    cout << "\n\n\t\t ---> Numero de page de la fin:";
    cin >> numero_de_page_fin ;
}

/*------------------------Affichage des informations enregistrées----------------------*/

void Document::afficher(){
    cout <<" \n\n\t\t >> Nom de l'Auteur:" << auteur;
    cout<< " \n\n\t\t >> Titre :" << titre;
    cout<< " \n\n\t\t >> Annee: " << annee;
}

void Livre::afficher(){
    cout << " \n\n\t ======> Informations renseignees sur un livre";
    Document::afficher();
    cout << " \n\n\t\t >> ISBN: " << ISBN;
}

void Journal::afficher(){
    cout << " \n\n\t ======> Informations renseignees sur un article de journal";
    Document::afficher();
    cout << " \n\n\t\t >> Nom de l'editeur: " << Nom_editeur;
    cout << " \n\n\t\t >> Numero de page du debut:" << numero_de_page_debut;
    cout << " \n\n\t\t >> Numero de page de la fin: " << numero_de_page_fin;
    cout << " \n\n\t\t >> Numero de volume: " << numero_de_volume;
}

void Conference::afficher(){
    cout << " \n\n\t ======> Informations renseignees sur un article de conference";
    Document::afficher();
    cout << " \n\n\t\t >> Nom de l'editeur: " << Nom_editeur;
    cout << " \n\n\t\t >> Numero de page du debut:  "<< numero_de_page_debut;
    cout << " \n\n\t\t >> Numero de page de la fin: " << numero_de_page_fin;     
}

/*--------------------Définition des fonctions de la classe liste------------------------*/

liste::liste()
    :tete(NULL)/*, courant(nullptr)*/ {}

liste::~liste(){
    // ListElement * suiv ;
    // courant = debut;
    // while((courant != nullptr)){
        // suiv = courant->suivant;
        // delete courant;
        // courant = suiv;
    // }
    delete tete;
}

void liste::addDoc(Document *chose){
    ListElement * NouvElem = new ListElement;
    NouvElem->contenu = chose;
    NouvElem->suivant = tete; 
    tete = NouvElem;
}

// void liste::premier(){
//     courant = debut;
// }

// Document * prochain(){
//     Document * DocSuiv = nullptr;
//     if(courant != nullptr){
//         DocSuiv = courant->contenu;
//         courant = courant->suivant;
//     }
//     return DocSuiv;
// }

void liste::affiche_liste(){
    ListElement *ptr;
    // ptr->contenu = NULL;
    // ptr->suivant = NULL;
    // ListElement *ptr1 = NULL;
    ptr = tete;
    // ptr1 = tete->suivant;
    while(ptr != NULL){
        ptr->contenu->afficher();
        cout << "\n\n Hola \n\n";
        ptr = ptr->suivant;
        cout << "\n\n Hola! que tal \n\n";
    }
    // premier();
    // while( !fini()){
    //     ptr = (Document*)prochain();
    //     ptr->afficher();
    // }
}