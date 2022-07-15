class Matiere 
{
	private : int idm;
	private : std::string nom;
	private : int idp;
	private : int coefficient;
	public : Matiere(int, std::String, int, int);
};
Matiere::Matiere(int idm, std::string nom, int coefficient, int idp)
{
	this->idm = idm;
	this->nom = nom;
	this->coefficient = coefficient;
	this->idp = idp; 
}
