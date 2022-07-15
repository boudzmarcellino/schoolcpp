class Personne
{
  //attributes creatind
   protected:std::string id ;
   protected:std::string cni ; 
   protected:std::string nom ; 
   protected:std::string prenom; 
   protected:std::string nationalite;
  //end attributes creating
  //headers or declaration of methods : prototypes 
   public:Personne(std::string , std::string , std::string); //Constructor
   public:std::string getId();
   public:std::string getCni();
   public:void setCni(std::string);
   public:std::string getNom();
   public:void setNom(std::string); 
   public:std::string getPrenom();
   public:void setPrenom(std::string);
   public:std::string getNationalite();
   public:void setNationalite(std::string);
   public:virtual std::string description() const;
};
//Methods definition
Personne::Personne(std::string id, std::string nom , std::string prenom)
{
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
    this->cni = " ";
    this->nationalite = " ";
}
std::string Personne::getId(){return this->id; }
std::string Personne::getNom(){return nom;}
void Personne::setNom(std::string nom){this->nom = nom ;}
std::string Personne::getPrenom(){return prenom;}
void Personne::setPrenom(std::string prenom){this->prenom = prenom ;}
std::string Personne::getCni(){return this->cni;}
void Personne::setCni(std::string cni){this->cni = cni ;}
std::string Personne::getNationalite(){return this->nationalite;}
void Personne::setNationalite(std::string nationalite){this->nationalite = nationalite ;}
std::string Personne::description() const 
{ 
    std::string s;
    s = id;
    s.insert(s.end(), 1, ' ');
    s.insert(s.size(), nom);
    s.insert(s.end(), ' ');
    s.insert(s.size(), prenom);
    s.insert(s.end(), ' ');
    s.insert(s.size(), nationalite);
    return s;
}
//end of definitions