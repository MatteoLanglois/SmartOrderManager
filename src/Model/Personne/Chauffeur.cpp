#include "Chauffeur.h"

Chauffeur::Chauffeur() {

}

Chauffeur::Chauffeur(const string &nom, const string &prenom,
                     const string &email, const string &motdepasse) : Personne(
        nom, prenom, email, motdepasse) {

}

Chauffeur::Chauffeur(const Chauffeur &chauffeur) {

}

Chauffeur::~Chauffeur() {

}

void Chauffeur::ajouteTrajet(Trajet trajet) {

}

void Chauffeur::modifieTrajet(Trajet trajet) {

}

void Chauffeur::supprimeTrajet(Trajet trajet) {

}

void Chauffeur::afficher() const {
    Personne::afficher();
}
