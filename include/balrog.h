#ifndef EX08_CREATURES_BALROG_H
#define EX08_CREATURES_BALROG_H
#include <string>
#include "creature.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class balrog : public demon {
                public:
                    balrog(int strength, int hit) : demon(strength, hit) {
                    }

                    const std::string &getSpecies() const;
                    int getDamage() const;

                private:
                    const std::string species = "Balrog";
                };
            }
        }
    }
}

#endif //EX08_CREATURES_BALROG_H