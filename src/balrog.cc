#include "balrog.h"
#include "creature.h"
#include <iostream>
#include <string>
#include <random>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                const std::string &balrog::getSpecies() const {
                    return species;
                }

                int balrog::getDamage() const {
                    int damage;
                    damage = demon::getDamage();
                    int damage2 = (rand() % getStrength()) + 1;
                    std::cout << "Balrog speed attack inflicts" << damage2 << "additional damage points" << std::endl;
                    damage = damage + 2;
                    return damage;
                }
            }
        }
    }
}