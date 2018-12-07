//
// Created by vscilab on 11/29/2018.
//

#ifndef EX08_CREATURES_CYBERDEMON_H
#define EX08_CREATURES_CYBERDEMON_H

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class cyberdemon : public Demon {
                    virtual int getDamage() const;
                    virtual const std::string &getSpecies() const = 0;
                };

            }
        }
    }
}
#endif //EX08_CREATURES_CYBERDEMON_H
