#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_DISPATCHER_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_DISPATCHER_H

#include "../Autre/Colis.h"
#include "Personne.h"
#include <vector>

using namespace std;

class Dispatcher: public Personne {
private:
    vector<Colis> colis;

public:
    Dispatcher();
    Dispatcher(const std::string &nom, const std::string &prenom,
               const std::string &email, const std::string &motdepasse);
    Dispatcher(const Dispatcher &dispatcher);
    ~Dispatcher();

    void remplir();
    void dispatch();

    void afficher() const override;
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_DISPATCHER_H
