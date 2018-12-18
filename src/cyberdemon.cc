#include <iostream>
#include "creature.h"
#include "demon.h"
#include "cyberdemon.h"
#include <string>
#include <random>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                const std::string &cyberdemon::getSpecies() const {
                    return species;
                }

                int cyberdemon::getDamage() const {
                    return demon::getDamage();
                }
            }
        }
    }
}
