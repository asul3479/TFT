#include <iostream>

using namespace std;

float AS;
int MR;
int Armor;
int AD;
int AP;
int ArcanistAP;
int AttackRange;
int LifeSteal;
int Omnivamp;
int NumberOfItems;
int HP;
int BruiserHP;
int CritChance;
int CritDamage;
int DodgeChance;
int Mana;
int BonusDamage;
int Shield;
int Healing;
int Cost;
int DamageReduction;
int ArcanistCounter;
int AssasinCounter;
int BodyguardCounter;
int BruiserCounter;
int ChallengerCounter;
int ColossusCounter;
int EnchanterCounter;
int InnovatorCounter;
int ProtectorCounter;
int ScholarCounter;
int SniperCounter;
int TransformerCounter;
int TwinshotCounter;
int AcademyCounter;
int ChemtechCounter;
int ClockworkCounter;
int CuddlyCounter;
int EnforcerCounter;
int GluttonCounter;
int ImperialCounter;
int MercenaryCounter;
int MutantCounter;
int ScrapCounter;
int SisterCounter;
int SocialiteCounter;
int SyndicateCounter;
int YordleCounter;
int YordleLordCounter;

class Arcanist{
    public:
    Arcanist(int ArcanistCounter){
        switch(ArcanistCounter){
            case 0:
                break;
            case 1:
                break;
            case 2:
                ArcanistAP=AP+AP*0.2;
                AP=AP+AP%20;
                break;
            case 3:
                ArcanistAP=AP+AP*0.2;
                AP=AP+AP*0.2;
                break;
            case 4:
                ArcanistAP=AP+AP*0.4;
                AP=AP+AP*0.2;
                break;
            case 5:
                ArcanistAP=AP+AP*0.4;
                AP=AP+AP*0.2;
                break;
            case 6:
                ArcanistAP=AP+AP*0.5;
                AP=AP+AP*0.5;
                break;
            case 7:
                ArcanistAP=AP+AP*0.5;
                AP=AP+AP*0.5;
                break;
            case 8:
                ArcanistAP=AP+AP*1.45;
                AP=AP+AP*1.45;
                break;
            case 9:
                ArcanistAP=AP+AP*1.45;
                AP=AP+AP*1.45;
                break;
            case 10:
                ArcanistAP=AP+AP*1.45;
                AP=AP+AP*1.45;
                break;
            case 11:
                ArcanistAP=AP+AP*1.45;
                AP=AP+AP*1.45;
                break;
            case 12:
                ArcanistAP=AP+AP*1.45;
                AP=AP+AP*1.45;
                break;
        }
    }
    Arcanist(){

    }
};

class Assasin{                                                                      //Add jump in backline
    public:
    Assasin(int AssasinCounter){
        switch(AssasinCounter){
            case 0:
                break;
            case 1:
                break;
            case 2:
                CritChance=CritChance+CritChance*0.1;
                CritDamage=CritDamage+CritDamage*0.2;
                break;
            case 3:
                CritChance=CritChance+CritChance*0.1;
                CritDamage=CritDamage+CritDamage*0.2;
                break;
           case 4:
                CritChance=CritChance+CritChance*0.3;
                CritDamage=CritDamage+CritDamage*0.4;
                break;
           case 5:
                CritChance=CritChance+CritChance*0.3;
                CritDamage=CritDamage+CritDamage*0.4;
                break;
            case 6:
                CritChance=CritChance+CritChance*0.5;
                CritDamage=CritDamage+CritDamage*0.6;
                break;
            case 7:
                CritChance=CritChance+CritChance*0.5;
                CritDamage=CritDamage+CritDamage*0.6;
                break;
           case 8:
                CritChance=CritChance+CritChance*0.5;
                CritDamage=CritDamage+CritDamage*0.6;
                break;
           case 9:
                CritChance=CritChance+CritChance*0.5;
                CritDamage=CritDamage+CritDamage*0.6;
                break;
            case 10:
                CritChance=CritChance+CritChance*0.5;
                CritDamage=CritDamage+CritDamage*0.6;
                break;
        }
    }
    Assasin(){

    }
};

class Bodyguard{                                                       //Add Taunt
    public:
    Bodyguard(int BodyguardCounter){
        switch(BodyguardCounter){
            case 0:
                break;
            case 1:
                break;
            case 2:
                Armor+=100;
                Shield+=100;
                break;
            case 3:
                Armor+=100;
                Shield+=100;
                break;
            case 4:
                Armor+=200;
                Shield+=300;
                break;
            case 5:
                Armor+=200;
                Shield+=300;
                break;
            case 6:
                Armor+=350;
                Shield+=600;
                break;
            case 7:
                Armor+=350;
                Shield+=600;
                break;
            case 8:
                Armor+=500;
                Shield+=1000;
                break;
        }
    }
    Bodyguard(){

    }
};

class Bruiser{
    public:
    Bruiser(int BruiserCounter){
        switch(BruiserCounter){
            case 0:
                break;
            case 1:
                break;
            case 2:
                HP+=125;
                BruiserHP+=250;
                break;
            case 3:
                HP+=125;
                BruiserHP+=250;
                break;
            case 4:
                HP+=225;
                BruiserHP+=450;
                break;
            case 5:
                HP+=225;
                BruiserHP+=450;
                break;
            case 6:
                HP+=400;
                BruiserHP+=800;
                break;
            case 7:
                HP+=400;
                BruiserHP+=800;
                break;
            case 8:
                HP+=700;
                BruiserHP+=1400;
                break;
        }
    }
};

class Challenger{                                                      //Add dash to target and double AS after takedown
    public:
    Challenger(int ChallengerCounter){
        switch(ChallengerCounter){
            case 0:
                break;
            case 1:
                break;
            case 2:
                AS=AS+AS*0.3;
                break;
            case 3:
                AS=AS+AS*0.3;
                break;
            case 4:
                AS=AS+AS*0.55;
                break;
            case 5:
                AS=AS+AS*0.55;
                break;
            case 6:
                AS=AS+AS*0.8;
                break;
            case 7:
                AS=AS+AS*0.8;
                break;
            case 8:
                AS=AS+AS*1.3;
                break;
        }  
    }
};

class Colossus{                                                            //Add imunity to cc, requires 2 slots
    public:
    Colossus(int ColossusCounter){
        switch(ColossusCounter){
            case 0:
                break;
            case 1:
                break;
            case 2:
                DamageReduction+=25;
                break;
            case 3:
                DamageReduction+=25;
                break;
        }
    }
};

class Enchanter{
    public:
    Enchanter(int EnchanterCounter){
        switch(EnchanterCounter){
            case 0:
                break;
            case 1:
                break;
            case 2:
                MR+=20;
                Healing=Healing+Healing*0.25;
                break;
            case 3:
                MR+=35;
                Healing=Healing+Healing*0.4;
                break;
            case 4:
                MR+=50;
                Healing=Healing+Healing*0.6;
                break;
            case 5:
                MR+=75;
                Healing=Healing*2;
                break;
        }
    }

};

class Innovator{                                                     //Add scrab, bear and dragon

};

class Protector{                                                     //Add casting

};

class Scholar{                                                       //Add mana per second

};

class Sniper{                                                         //Add distance algorithm

};

class Transformer{                                        

};

class Twinshot{                                                    //Add double attack

};

class Academy{                                                       //Add casting

};

class Chemtech{                                                    //Add time

};

class Clockwork{                                                   //Add augments

};

class Cuddly{                                                     //Add yuumi

};

class Enforcer{                                                    //Check max hp and max dmg last fight

};

class Glutton{                                                    //Add tahm

};

class Imperial{                                                  //Add damage last fight

};

class Mercenary{                                                  //Add lose streak and chest

};

class Mutant{                                                     //Add mutant traits and random

};

class Scrap{                                                      //Add items and random

};

class Sister{                                                     //

};

class Socialite{                                                  //Add random for hex and hex buff

};

class Syndicate{

};

class Yordle{                                                      //Add yordle counting

};

class YordleLord{                                                 

};

class Akali : public Assasin, public Syndicate{

};

class Blitzcrank : public Scrap, public Protector, public Bodyguard{

};

class Braum : public Bodyguard, public Syndicate{

};

class Caitlyn : public Sniper, public Enforcer{

};

class Camille : public Clockwork, public Challenger{

};

class ChoGath : public Mutant, public Bruiser, public Colossus{

};

class Darius : public Syndicate, public Bodyguard{

};

class DrMundo : public Bruiser, public Mutant, public Chemtech{

};

class Ekko : public Scrap, public Assasin{

};

class Ezreal : public Scrap, public Innovator{

};

class Fiora: public Enforcer, public Challenger{

};

class Galio: public Colossus, public Socialite, public Bodyguard{

};

class Gangplank: public Mercenary, public Twinshot{

};

class Garen: public Academy, public Protector{

};

class Graves: public Academy, public Twinshot{

};

class Heimerdinger: public Yordle, public Innovator, public Scholar{

};

class Illaoi: public Mercenary, public Bruiser{

};

class Janna: public Scrap, public Enchanter, public Scholar{

};

class Jayce: public Transformer, public Innovator, public Enforcer{

};

class Jhin: public Clockwork, public Sniper{

};

class Jinx: public Sister, public Twinshot, public Scrap{

};

class Kaisa: public Mutant, public Challenger{

};

class Kassadin: public Mutant, public Protector{

};

class Katarina: public Academy, public Assasin{

};

class KogMaw: public Twinshot, public Sniper, public Mutant{

};

class Leona: public Bodyguard, public Academy{

};

class Lissandra: public Scholar, public Chemtech{

};

class Lulu: public Yordle, public Enchanter{

};

class Lux: public Arcanist, public Academy{

};

class Malzahar: public Mutant, public Arcanist{

};

class MissFortune: public Mercenary, public Sniper{

};

class Orianna: public Enchanter, public Clockwork{

};

class Poppy: public Yordle, public Bodyguard{

};

class Quinn: public Mercenary, public Challenger{

};

class Samira: public Imperial, public Challenger{

};

class Seraphine: public Socialite, public Innovator{

};

class Shaco: public Syndicate, public Assasin{

};

class Singed: public Chemtech, public Innovator{

};

class Sion: public Colossus, public Protector, public Imperial{

};

class Swain: public Arcanist, public Imperial{

};

class TahmKench: public Glutton, public Mercenary, public Bruiser{

};

class Talon: public Assasin, public Imperial{

};

class Taric: public Socialite, public Enchanter{

};

class Tristana: public Yordle, public Sniper{

};

class Trundle: public Scrap, public Bruiser{

};

class TwistedFate: public Arcanist, public Syndicate{

};

class Twitch: public Chemtech, public Assasin{

};

class Urgot: public Chemtech, public Twinshot{

};

class Veigar: public YordleLord{

};

class Vex: public Yordle, public Arcanist{

};

class Vi: public Sister, public Bruiser, public Enforcer{

};

class Viktor: public Arcanist, public Chemtech{

};

class Warwick: public Chemtech, public Challenger{

};

class Yone: public Academy, public Challenger{

};

class Yuumi: public Cuddly, public Academy, public Scholar{

};

class Zac: public Chemtech, public Bruiser{

};

class Ziggs: public Yordle, public Arcanist, public Scrap{

};

class Zilean: public Clockwork, public Innovator{

};

class Zyra: public Syndicate, public Scholar{

};


int main(){

}
