
#include "../../include/equip.h"

#include<memory>

// void fun()
// {
    // BlueMedicine bluemedicine;
    // RedMedicine redMedicine;
    // Stonesword a(0,0,0,10,10);
    // Ironsword b(0,0,0,30,30);
    // Bronzesword c(0,0,0,20,20);
    // Shoes d(5,5,5,10);
    // Armhour e(10,10,20,30);
    // std::vector<Equip> equipstore = {a,b,c};
    // std::vector<Medicine> medicinestore = {redMedicine,bluemedicine};
    // Store store(equipstore,medicinestore);
    // Hero hero;
    // Bag bag;
// }

int main()
{
    std::shared_ptr<BlueMedicine> bluemedicine = std::make_shared<BlueMedicine>() ;
    std::shared_ptr<RedMedicine> redMedicine = std::make_shared<RedMedicine>() ;
    std::shared_ptr<Stonesword> a = std::make_shared<Stonesword> (0,0,0,10,10);
    std::shared_ptr<Ironsword> b = std::make_shared<Ironsword> (0,0,0,30,30);
    std::shared_ptr<Bronzesword> c= std::make_shared<Bronzesword> (0,0,0,20,20);
    std::shared_ptr<Shoes> d = std::make_shared<Shoes> (5,5,5,10);
    std::shared_ptr<Armhour> e = std::make_shared<Armhour> (10,10,20,30);
    std::vector<std::shared_ptr<Equip>> equipstore = {a,b,c};
    std::vector<std::shared_ptr<Medicine>> medicinestore = {redMedicine,bluemedicine};
    Store store(equipstore,medicinestore);
    Hero hero;
    Bag bag;
    hero.display();
    a->equiped(hero);
    hero.display();
    bag.changeequip(c,hero);
    hero.display();
    bag.changeequip(d,hero);
    hero.display();
}