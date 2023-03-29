#include "Colis.h"

Colis::Colis() {

}

Colis::Colis(int idcolis, std::string villearrivee, std::string dateAjoutColis,
             int status) : idcolis(idcolis), villearrivee(villearrivee),
                           dateAjoutColis(dateAjoutColis), status(status) {

}

Colis::Colis(const Colis &colis) {

}

Colis::~Colis() {

}
