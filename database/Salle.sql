CREATE TABLE IF NOT EXISTS school.Salle
(
    ids INTEGER,
    genre ENUM("normal", "amphi", "laboratoire"),
    nom VARCHAR(255),
    places INTEGER,
    CONSTRAINT consSalle
        PRIMARY KEY (ids),
        CHECK(places IS NOT NULL)
);
INSERT INTO school.Salle(ids, genre, nom, places) VALUES(1, "Amphi", "St Jean", 2000);