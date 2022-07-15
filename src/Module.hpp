class Module 
{
    private : std::string idModule;
    private : std::string nom;
    private : Vector <Matiere> list;
    public : Module(std::string , std::string);
    public : void ajouterMatiere(std::string);
    public : void supprimerMatiere(std::string);
};

Module :: Module(std::string idModule , std::string nom)
{
    this->idModule = idModule;
    this->nom = nom;
    this->list = new Vector();
}
void Module::ajouterMatiere(std::string idMatiere);
void Matiere::supprimerMatiere(std::string idMatiere); 