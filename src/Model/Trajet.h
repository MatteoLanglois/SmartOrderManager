#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_TRAJET_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_TRAJET_H

#include "Chauffeur.h"
#include <string>

using namespace std;

class Trajet {
private:
    int idTrajet;
    int idChauffeur;
    std::string villedepart;
    std::string villearrivee;
    std::string horairedepart;
    std::string horairearrivee;
    int poids;
    int prix;
    int status;

};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_TRAJET_H
