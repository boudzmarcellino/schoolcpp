class Professeur : public Personne
{
    private: std::string idp;
    private: int grade;
    private: int aDebut;

    public: Professeur(std::string , std::string , std::string , std::string);
    public: std::string getIdp();
    public: int getGrade();
    public: int getADebut();
    public:std::string description() const;
};

Professeur::Professeur(std::tring id , std::string nom , std::string prenom , std::string idp):Personne(id , nom , prenom)
{
    this->idp = idp; 
    grade = 0000;
    aDebut = 0000;
}
std::string Professeur::getIdp(){return idp; }
int Professeur::getGrade(){return grade;}
int Professeur::getADebut(){return aDebut;}
std::string Professeur::description() const
{
    std::string p;
    p = Personne::description();
    p.insert(p.size(), " Professeur ");
    p.insert(p.size(), idp);
    p.insert(p.end(), 1, ' ');
    p.insert(p.end(), 1, grade); 
    return p;
}