#ifndef FURBY
#define FURBY

#include "ArtificialPet.h"

class Furby : public ArtificialPet {
    public:
        Furby();
        void dance(int minutes);
        virtual void play(int minutes);
};

#endif