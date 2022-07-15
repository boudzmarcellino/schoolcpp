CREATE TABLE  IF NOT EXISTS school.Etudiant
(
    ide INTEGER,
    nom VARCHAR(255) DEFAULT "none" COMMENT 'last ame of student',
    prenom VARCHAR(255) DEFAULT 'none' COMMENT 'Fisrt name of student', 
    aEntree INTEGER  COMMENT 'Fisrt year to school',
    nEntree INTEGER,
    opt VARCHAR(255) COMMENT "option de l'etudiant",
    CONSTRAINT consEtudiant 
        PRIMARY KEY (ide),
        CHECK (aEntree IS NOT NULL)
);

INSERT INTO school.Etudiant(ide, nom, prenom, aEntree, nEntree, opt) VALUES (1, "BOUDZOUMOU", "Jean", 2021, 5, "TSI");
INSERT INTO school.Etudiant(ide, nom, prenom, aEntree, nEntree, opt) VALUES (2, "MOULOKI", "Carene", 2015, 6, "Economie");