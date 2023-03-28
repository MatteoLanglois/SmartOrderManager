#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H

#include "Personne.h"
#include "../Autre/Trajet.h"
#include <vector>

using namespace std;

class Chauffeur : public Personne {
private:
    vector<Trajet> trajets;
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H
