//
// Created by mamac on 28/03/2023.
//

#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_ADMIN_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_ADMIN_H


#include "Personne.h"
#include "string"

class Admin: public Personne {
public:
    Admin();
    Admin(const std::string &nom, const std::string &prenom, const std::string &email, const std::string &password);
    Admin(const Admin &admin);
    ~Admin();

    void setNom(const std::string &nom);
    void setPrenom(const std::string &prenom);
    void setEmail(const std::string &email);
    void setPassword(const std::string &password);

    std::string getNom() const;
    std::string getPrenom() const;
    std::string getEmail() const;
    std::string getPassword() const;

    void afficher() const;
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_ADMIN_H
