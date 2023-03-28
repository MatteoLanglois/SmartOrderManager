#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H

#include "../Autre/Trajet.h"
#include "Personne.h"
#include <vector>

using namespace std;

class Chauffeur : public Personne {
private:
    vector<Trajet> trajets;

public:
    Chauffeur();
    Chauffeur(const std::string &nom, const std::string &prenom,
              const std::string &email, const std::string &motdepasse);
    Chauffeur(const Chauffeur &chauffeur);
    ~Chauffeur();

    void ajouteTrajet(Trajet trajet);
    void modifieTrajet(Trajet trajet);
    void supprimeTrajet(Trajet trajet);

    void afficher() const override;
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_CHAUFFEUR_H
