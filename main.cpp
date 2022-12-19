#include <iostream>
#include "header.hpp"

using namespace std;

int main(){
    int typel = 1;
    int choix;
    liste l;

    while(1){
        do{
            cout << "\n\n\t\t\t >> Options disponibles: ";
            cout << "\n\n\t\t\t\t >> 1- Ajouter un document dans la liste chainee ";
            cout << "\n\n\t\t\t\t >> 2- Afficher les documents enregistrees " << "\n\n Option choisie : ";
            cin >> choix;
        }while(choix != 1 && choix != 2); 
        if( choix == 1){
            do{
                //Choix du type de document
                cout << "\n ======================== Type du document : " ;
                cin >> typel;
                if(typel > 3 || typel < 1){
                    cout <<"\n\t >> Erreur de type"<<endl;
                }
            }while(typel > 3 || typel < 1);
            if(typel == 1){
                Livre book;
                book.lire();
                l.addDoc(&book);
            }else if(typel == 2){
                Journal news;
                news.lire();
                l.addDoc(&news);
            }else{
                Conference conf;
                conf.lire();
                l.addDoc(&conf);
            }
        }else{
            l.affiche_liste();
        }
    }
    return 0;
}