#ifndef EX08_CREATURES_DEMON_H
#define EX08_CREATURES_DEMON_H
#include <string>
#include "creature.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class demon : public Creature {
                public:
                    demon(int strength, int hit): Creature(strength, hit) {
                    }
                    int getDamage() const;
                };
            }
        }
    }
}

#endif //EX08_CREATURES_DEMON_H