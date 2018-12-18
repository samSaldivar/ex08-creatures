#include "human.h"
#include <iostream>
#include <creature.h>
#include <string>
#include <random>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                const std::string &human::getSpecies() const {
                    return species;
                }
            }
        }
    }
}