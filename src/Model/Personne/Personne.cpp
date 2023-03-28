//
// Created by mamac on 28/03/2023.
//

#include "Personne.h"

/* Statique */

int Personne::idSuivant = 1;

/* Instance */

Personne::Personne() {

}

Personne::Personne(const std::string &nom, const std::string &prenom,
                   const std::string &email, const std::string &motdepasse) {

}

Personne::Personne(const Personne &personne) {

}

Personne::~Personne() {

}

void Personne::setNom(const std::string &nom) {

}

void Personne::setPrenom(const std::string &prenom) {

}

void Personne::setEmail(const std::string &email) {

}

void Personne::setMotdepasse(const std::string &motdepasse) {

}

std::string Personne::getNom() const {
    return nom;
}

std::string Personne::getPrenom() const {
    return prenom;
}

std::string Personne::getEmail() const {
    return email;
}

std::string Personne::getMotdepasse() const {
    return motdepasse;
}

void Personne::afficher() const {

}
