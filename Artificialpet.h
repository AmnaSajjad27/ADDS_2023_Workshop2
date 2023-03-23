#ifndef ARTIFICIAL_PET
#define ARTIFICIAL_PET

class ArtificialPet {
    protected:
        int fullnessLvl;

    public:
        ArtificialPet();
        int getFullness();
        bool isHungry();
        void feed();
        virtual void play(int minutes)=0;
        virtual void dance(int minutes)=0;
};

#endif