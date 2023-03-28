#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_DISPATCHER_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_DISPATCHER_H

#include "../Autre/Colis.h"
#include <vector>

using namespace std;

class Dispatcher: public Personne {
private:
    vector<Colis> colis;

public:
    void remplir();
    void dispatch();
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_DISPATCHER_H
