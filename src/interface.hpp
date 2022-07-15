class Interface : public QWidget
{
    private : QLabel labelCategorie;
    private : QPushButton buttonCategorieProfesseur, buttonCategorieVisiteur, buttonCategorieEtudiant;
    public : Interface();
    public : ~Interface();
};

Interface::Interface() : QWidget()
{     
    labelCategorie.setParent(this);
    labelCategorie.setText("Veuiller preciser votre categorie");
    labelCategorie.resize(300,90);
    labelCategorie.move((width()-labelCategorie.width())/2,0); //A appliquer sur ecouteur 
       
    QHBoxLayout choixCategorie;

    buttonCategorieProfesseur.setParent(this);
    buttonCategorieProfesseur.setText("Professeur");
    buttonCategorieVisiteur.setText("Visiteur");
    buttonCategorieEtudiant.setText("Etudiant");
    choixCategorie.addWidget(&buttonCategorieProfesseur);
    choixCategorie.addWidget(&buttonCategorieEtudiant);
    choixCategorie.addWidget(&buttonCategorieVisiteur);
}

Interface::~Interface(){};
