#include "Trajet.h"

Trajet::Trajet() {

}

Trajet::Trajet(int idchauffeur, std::string villedepart,
               std::string villearrivee, std::string horairearrivee,
               std::string horairedepart, int poids, int prix, int status)
               : idChauffeur(idchauffeur), villedepart(villedepart),
                 villearrivee(villearrivee), horairearrivee(horairearrivee),
                 horairedepart(horairedepart), poids(poids), prix(prix),
                 status(status) {

}

Trajet::Trajet(const Trajet &trajet) {

}

Trajet::~Trajet() {

}
