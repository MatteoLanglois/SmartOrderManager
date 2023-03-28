//
// Created by mamac on 28/03/2023.
//

#ifndef LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_ADMIN_H
#define LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_ADMIN_H

#include "Personne.h"
#include <string>

class Admin: public Personne {
public:
    Admin();
    Admin(const std::string &nom, const std::string &prenom,
          const std::string &email, const std::string &motdepasse);
    Admin(const Admin &admin);
    ~Admin();

    void afficher() const override;
};


#endif //LANGLOISMATTEODEVOBJET_PROJETSMARTORDERMANAGER_ADMIN_H
