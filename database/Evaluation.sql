CREATE TABLE IF NOT EXITS Evaluation
(
    idm INTEGER,
    genre ENUM("controle1", "controle2", "session ordinaire", "session rattrapage"),
    niveau INTEGER,
    duree DATE,
    ids INTERGER,
    date DATE,
    CONSTRAINT consEvaluation
        PRIMARY KEY (idm, genre, niveau, annee),
        FOREIGN KEY (idm) REFERENCES Matiere (idm) ON UPDATE CASCADE ON DELETE NO ACTION,
        FOREIGN KEY (ids) REFERENCES Salle (ids) ON UPDATE CASCADE ON DELETE NO ACTION,
        CHECK (annee IS NOT NULL),
        CHECK (niveau IS NOT NULL)
)