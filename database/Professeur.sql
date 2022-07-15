CREATE TABLE IF NOT EXISTS school.Professeur
(
    idp INTEGER,
    nom VARCHAR(255) DEFAULT "none" COMMENT 'last ame of professor',
    prenom VARCHAR(255) DEFAULT 'none' COMMENT 'Fisrt name of professor', 
    grade ENUM ("Docteur","Maitre-assistant","Maitre conference"),
    specialite VARCHAR(255) COMMENT 'speciallite du professeur',
    CONSTRAINT conProfesseur
        PRIMARY KEY (idp),
        CHECK (nom IS NOT NULL), 
        CHECK (prenom IS NOT NULL)
);
INSERT INTO school.Professeur(idp, nom, prenom, grade, specialite) VALUES (1, "NZIENGUI", "Mabika", "Maitre-assistant", "Traitement");
