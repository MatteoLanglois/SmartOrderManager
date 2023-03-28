#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H

#include "Personne.h"
#include "Trajet.h"
#include <vector>

using namespace std;

class Chauffeur : public Personne {
private:
    int idChauffeur;
    vector<Trajet> trajets;
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H
