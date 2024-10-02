#include <iostream>
using namespace std;

class Inhabitant {
    string name;
    int age;
    string gender;
public:
    Inhabitant(string name, int age, string gender) : name{ name }, age{ age }, gender{ gender } {};

    string getName() const {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    string setGender() const {
        return gender;
    }

    void setGender(string gender) {
        this->gender = gender;
    }
};

class Premises {
    int count_room;
    int area;
    string address;
    Inhabitant** inhabitants;
    int maxInhabitants;
public:
    Premises(int count_room, int area, string address, Inhabitant** inhabitants, int maxInhabitants) : count_room(count_room), area(area), address(address), inhabitants(inhabitants), maxInhabitants(maxInhabitants) {}

    void addInhabitant(const Inhabitant& inhabitant, int index) {
        inhabitants[index] = new Inhabitant(inhabitant);
    }

    int getCountRoom() const {
        return count_room;
    }

    void setCountRoom(int count_room) {
        this->count_room = count_room;
    }

    int getArea() const {
        return area;
    }

    void setArea(int area) {
        this->area = area;
    }

    string getAddress() const {
        return address;
    }

    void setAddress(const string& address) {
        this->address = address;
    }

    Inhabitant** getInhabitants() const {
        return inhabitants;
    }

    void setInhabitants(Inhabitant** inhabitants) {
        this->inhabitants = inhabitants;
    }

    ~Premises() {
        for (int i = 0; i < maxInhabitants; i++) {
            delete inhabitants[i];
        }
        delete[] inhabitants;
    }
};

class Apartment : Premises {
    int entrance_number;
    int floor;
    int apartment_number;
public:
    Apartment(int count_room, int area, string address, Inhabitant** inhabitants, int entrance_number, int floor, int apartment_number, int maxInhabitants) : Premises(count_room, area, address, inhabitants, maxInhabitants), entrance_number{ entrance_number }, floor{ floor }, apartment_number{ apartment_number } {};
    
    int getEntranceNumber() const {
        return entrance_number;
    }

    void setEntranceNumber(int entrance_number) {
        this->entrance_number = entrance_number;
    }

    int getFloor() const {
        return floor;
    }

    void setFloor(int floor) {
        this->floor = floor;
    }

    int getApartmentNumber() const {
        return apartment_number;
    }

    void setApartmentNumber(int apartment_number) {
        this->apartment_number = apartment_number;
    }
};

class Private_house : Premises {
    int yard_area;
public:
    Private_house(int count_room, int area, string address, Inhabitant** inhabitants, int maxInhabitants, int yard_area): Premises(count_room, area, address, inhabitants, maxInhabitants), yard_area(yard_area) {}
    int getYardArea() {
        return yard_area;
    }

    void setYardArea(int yard_area) {
        this->yard_area = yard_area;
    }
};

class Cottage : Premises {
    int count_of_bathroom;
    int count_of_sleeping_places;
public:
    Cottage(int count_room, int area, string address, Inhabitant** inhabitants, int maxInhabitants, int count_of_bathroom, int count_of_sleeping_places) : Premises(count_room, area, address, inhabitants, maxInhabitants), count_of_bathroom(count_of_bathroom), count_of_sleeping_places(count_of_sleeping_places) {}
    
    int getCountOfBathroom() const {
        return count_of_bathroom;
    }

    void setCountOfBathroom(int count_of_bathroom) {
        this->count_of_bathroom = count_of_bathroom;
    }

    int getCountOfSleepingPlaces() const {
        return count_of_sleeping_places;
    }

    void setCountOfSleepingPlaces(int count_of_sleeping_places) {
        this->count_of_sleeping_places = count_of_sleeping_places;
    }
};

class Hotel : Premises {
    int count_of_rooms;
    int price_of_the_most_expensive;
    int price_of_the_most_cheapest;
public:
    Hotel(int count_room, int area, string adress, Inhabitant** inhabitants, int maxInhabitants, int count_of_rooms, int price_of_the_most_expensive, int price_of_the_most_cheapest) : Premises(count_room, area, adress, inhabitants, maxInhabitants), count_of_rooms{ count_of_rooms }, price_of_the_most_expensive{ price_of_the_most_expensive }, price_of_the_most_cheapest{ price_of_the_most_cheapest } {};
    int getCountOfRooms() const {
        return count_of_rooms;
    }

    void setCountOfRooms(int count_of_rooms) {
        this->count_of_rooms = count_of_rooms;
    }

    int getPriceOfTheMostExpensive() const {
        return price_of_the_most_expensive;
    }

    void setPriceOfTheMostExpensive(int price_of_the_most_expensive) {
        this->price_of_the_most_expensive = price_of_the_most_expensive;
    }

    int getPriceOfTheMostCheapest() const {
        return price_of_the_most_cheapest;
    }

    void setPriceOfTheMostCheapest(int price_of_the_most_cheapest) {
        this->price_of_the_most_cheapest = price_of_the_most_cheapest;
    }
};

class Housing_manager {

};

int main()
{
    
}