
class Etudiant : public Personne
{
    private: std::string ide;
    private: std::string option;
    private: int aEntree;
    private: int nEntree; 
    private: bool mode;

    public:Etudiant(std::string , std::string , std::string , std::string);
    public:std::string getIde();
    public:int getAEntree();
    public:int getNEntree();
    public:bool getMode();
    public:virtual std::string description() const;
};

Etudiant::Etudiant(std::string id , std::string nom , std::string prenom , std::string ide ):Personne(id , nom , prenom)
{
    this->ide = ide;
    this->nEntree = 0000;
    this->aEntree = 0000;
    this->option = "";
    this->mode = true;  
}
int Etudiant::getAEntree(){return aEntree;}
std::string Etudiant::getIde(){return ide;}
int Etudiant::getNEntree(){return nEntree;}
bool Etudiant::getMode(){return mode;}
std::string Etudiant::description() const
{
    std::string e;
    e = Personne::description();
    e.insert(e.size(), " Etudiant ");
    e.insert(e.size(), ide);
    e.insert(e.end(), 1, ' ');
    e.insert(e.size(), option); 
    return e;
}