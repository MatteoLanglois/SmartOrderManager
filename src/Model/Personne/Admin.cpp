//
// Created by mamac on 28/03/2023.
//

#include "Admin.h"

Admin::Admin() {

}

Admin::Admin(const string &nom, const string &prenom, const string &email,
             const string &password) {

}

Admin::Admin(const Admin &admin) {

}

Admin::~Admin() {

}

void Admin::setNom(const string &nom) {

}

void Admin::setPrenom(const string &prenom) {

}

void Admin::setEmail(const string &email) {

}

void Admin::setPassword(const string &password) {

}

string Admin::getNom() const {
    return this->nom;
}

string Admin::getPrenom() const {
    return this->prenom;
}

string Admin::getEmail() const {
    return this->email;
}

string Admin::getPassword() const {
    return this->motdepasse;
}

void Admin::afficher() const {
}


