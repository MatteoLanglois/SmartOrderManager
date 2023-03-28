#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_COLIS_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_COLIS_H

#include <string>

using namespace std;

class Colis {
private:
    static int idSuivant;

    int idcolis;
    std::string villearrivee;
    std::string dateAjoutColis;

    /*
     * Status :
     *   0 pour colis rajouté
     *   1 pour livraison sollicité
     *   2 livraison acceptée
     *   3 livraison en cours
     *   4 colis livré
     */
    int status;

public:
    Colis();
    Colis(int idcolis, std::string villearrivee,
          std::string dateAjoutColis, int status);
    Colis(const Colis &colis);
    ~Colis();
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_COLIS_H
