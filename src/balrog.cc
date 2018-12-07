#include "balrog.h"
#include "creature.h"
#include <iostream>
#include "demon.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                int balrog::getDamage() const {
                    int damage;
                    damage = Demon::getDamage();
                    std::cout << getSpecies() << " attack for " <<
                    damage << "points!" << std::endl;
                    int damage2 = (rand() % strength) + 1;
                    std::cout << "Balrog speed attack inflicts " << damage2 << "additional damage points!" << std::endl;
                    damage = damage + damage2;
                    return damage;
                }
            }
        }
    }
}