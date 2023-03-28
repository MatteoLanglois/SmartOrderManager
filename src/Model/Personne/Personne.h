#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_PERSONNE_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_PERSONNE_H

#include "string"

using namespace std;

class Personne {
protected:
    int id;
    std::string nom;
    std::string prenom;
    std::string email;
    std::string motdepasse;
    int role;
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_PERSONNE_H
