#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_TRAJET_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_TRAJET_H

#include <string>

using namespace std;

class Trajet {
private:
    static int idSuivant;

    int idTrajet;
    int idChauffeur;
    std::string villedepart;
    std::string villearrivee;
    std::string horairedepart;
    std::string horairearrivee;
    int poids;
    int prix;

    /*
     * Status :
     *   0 pour trajet créé
     *   1 pour trajet sollicité
     *   2 pour trajet accepté
     *   3 livraison en cours
     *   4 trajet complété et colis livrés
     */
    int status;

public:
    Trajet();
    Trajet(int idchauffeur,
           std::string villedepart, std::string villearrivee,
           std::string horairearrivee, std::string horairedepart,
           int poids, int prix, int status);
    Trajet(const Trajet &trajet);
    ~Trajet();
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_TRAJET_H
