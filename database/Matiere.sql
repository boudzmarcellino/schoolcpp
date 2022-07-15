CREATE TABLE IF NOT EXISTS  school.Matiere
(
    idm  INTEGER,
    nom VARCHAR(255),
    coefficient INTEGER,
    idp INTEGER,
    CONSTRAINT consMatiere
        PRIMARY KEY (idm),
        FOREIGN KEY(idp) REFERENCES school.Professeur(idp) ON DELETE SET NULL ON UPDATE CASCADE
);
INSERT INTO school.Matiere(idm, nom, coefficient, idp) VALUES(1, "signaux analogique et numerique", 2, 1);
