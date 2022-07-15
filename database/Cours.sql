CREATE TABLE IF NOT EXISTS Cours
(
    idm INTEGER,
    genre ENUM("cours", "travaux diriges", "travaux pratiques"),
    niveau INTEGER,
    duree DATE,
    ids INTERGER,
    CONSTRAINT consEvaluation
        PRIMARY KEY (idm, genre, niveau, annee),
        FOREIGN KEY (idm) REFERENCES Matiere (idm) ON UPDATE CASCADE ON DELETE NO ACTION,
        FOREIGN KEY (ids) REFERENCES Salle (ids) ON UPDATE CASCADE ON DELETE NO ACTION,
        CHECK (annee IS NOT NULL),
        CHECK (niveau IS NOT NULL)
)