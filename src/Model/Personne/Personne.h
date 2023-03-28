#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_PERSONNE_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_PERSONNE_H

#include <string>

using namespace std;

class Personne {
private:
    static int idSuivant;

protected:
    int id;
    std::string nom;
    std::string prenom;
    std::string email;
    std::string motdepasse;

    /*
     * Rôle :
     *   0 Admin
     *   1 Chauffeur
     *   2 Dispatcher
     */
    int role;

public:
    Personne();
    Personne(const std::string &nom, const std::string &prenom,
             const std::string &email, const std::string &motdepasse);
    Personne(const Personne &personne);
    virtual ~Personne();

    void setNom(const std::string &nom);
    void setPrenom(const std::string &prenom);
    void setEmail(const std::string &email);
    void setMotdepasse(const std::string &motdepasse);

    std::string getNom() const;
    std::string getPrenom() const;
    std::string getEmail() const;
    std::string getMotdepasse() const;

    virtual void afficher() const;
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_PERSONNE_H
