class Cours
{
    private:int idm;
    private:std::string genre;
    private:int niveau;
    private:std::string duree;
    private:std::string date;
    private:int ids;
    public:Cours(int idm, std::string genre, int niveau, std::string duree, std::string date, int ids);
};
Cours::Cours(int idm, std::string genre, int niveau, std::string duree, std::string date, int ids)
{
    this->idm = idm;
    this->genre = genre;
    this->niveau = niveau;
    this->duree = niveau;
    this->date = date;
    this->ids = ids;
}