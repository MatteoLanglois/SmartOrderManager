#include "Dispatcher.h"

Dispatcher::Dispatcher() {

}

Dispatcher::Dispatcher(const string &nom, const string &prenom,
                       const string &email, const string &motdepasse)
        : Personne(nom, prenom, email, motdepasse) {

}

Dispatcher::Dispatcher(const Dispatcher &dispatcher) {

}

Dispatcher::~Dispatcher() {

}

void Dispatcher::remplir() {

}

void Dispatcher::dispatch() {

}

void Dispatcher::afficher() const {
    Personne::afficher();
}
