#include <string>
class Salle
{
    private:int ids;
    private:std::string genre;
    private:std::string nom;
    private:int places;
    public:Salle(int ids, std::string genre, std::string nom, int places);
};
Salle::Salle(int ids, std::string genre, std::string nom, int places)
{ 
    this->ids = ids;
    this->genre;
    this->nom = nom;
    this->places = places;
}