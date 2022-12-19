#ifndef HEADER_HPP
#define HEADER_HPP

#include<iostream>
#include<string>
using namespace std;

    class Document{
        protected:
            int annee;      
            string auteur;
            string titre;
        public:
            virtual void lire();
            virtual void  afficher();  
    };

    class Livre: public Document{
        private:
            int ISBN;
        public:
            // Livre();
            void lire();
            void afficher();
    };

    class Journal: public Document{
        private:
            int numero_de_page_debut;
            int numero_de_page_fin;
            int numero_de_volume;
            string Nom_editeur;
        public:
            // Journal();
            void lire();
            void afficher();
    };

    class Conference: public Document{
        private :
            int numero_de_page_debut;
            int numero_de_page_fin;
            string Nom_editeur;
        public:
            // Conference();
            void lire();
            void afficher();
    };

    struct ListElement{
        Document  *contenu;
        ListElement *suivant;
        // Document *contenu;
    };

    class liste{
            ListElement *tete;
            // ListElement *courant;
        public:
            liste();
            ~liste();
            void addDoc(Document *);
            void affiche_liste();
            // void premier();
            // Document* prochain(){
                // Document * DocSuiv = nullptr;
                // if(courant != nullptr){
            //         DocSuiv = courant->contenu;
            //         courant = courant->suivant;
            //     }
            //     return DocSuiv;
            // }
            // int fini(){
            //     return (courant == nullptr);
            // }
            // liste(const liste &) = delete;
            // liste & operator = (const liste &) = delete;

            // liste &operator = (const liste &) = delete;
    };

#endif