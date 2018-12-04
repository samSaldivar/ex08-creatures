#include <iostream>
#include "elf.h"
#include "creature.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                int elf::getDamage() const {
                    int damage;
                    damage = Creature::getDamage();
                    std::cout << getSpecies() << " attack for " <<
                    damage << "points!" << std::endl;
                        if ((rand()%10)==0) {
                            std::cout << "Magical attack inflicts " << damage<< "additional damage points!" << std::endl;
                            damage = damage * 2;
                        }
                    return damage;
                }
            }
        }
    }
}