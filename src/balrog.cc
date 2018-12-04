#include "balrog.h"
#include "demon.h"
#include <iostream>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                int Creature::getDamage() const {
                    int damage;
                    damage = Creature::getDamage();
                    std::cout << getSpecies() << " attack for " <<
                              damage << "points!" << std::endl;
                    int damage2 = rand() % strength) + 1;
                    std::cout << "Balrog speed attack inflicts " << damage2 << "additional damage points!" << std::endl;
                    damage = damage + damage2;
                }
            }
        }
    }
}