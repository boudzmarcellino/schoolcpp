--creation des professeurs

!create dpt:Departement
!set dpt.nom := 'genie electrique'

!create elec:Formation
!set elec.nom := 'electronique'
!insert (dpt , elec) into DepartementFormation

!create elec1:Classe
!set elec1.nivean := #master1
!insert (elec , elec1) into FormationClasse

!create prof1:ChefDepartement
!set prof1.nom := 'NZIENGUI'
!set prof1.prenom := 'Camile'
!set prof1.aEntree := 2000
!set prof1.grade := #doctorat
!insert(dpt , prof1) into DepartementChefDepartement
!insert(elec , prof1) into FormationProfesseur

!create prof2:ChefFormation
!set prof2.nom := 'BOIS'
!set prof2.prenom := 'Miteran'
!set prof2.aEntree := 2000
!set prof2.grade := #professorat
!insert(elec , prof2) into FormationChefFormation

--creation des matieres
!create ue1:Matiere
!set ue1.nom := 'Info Indus'
!set ue1.coefficient := 3
!insert(ue1 , prof2) into MatiereProfesseur

--creation des etudiants
!create etud1:Etudiant
!set etud1.nom := 'BOUDZOUMOU'
!set etud1.prenom := 'Jean'
!set etud1.aEntree := 2020
!set etud1.niveau := #master1
!insert(elec1 , etud1) into ClasseEtudiant

!create etud3:Etudiant
!set etud3.nom := 'TSHALA'
!set etud3.prenom := 'Ben'
!set etud3.aEntree := 2020
!set etud3.niveau := #master1
!insert(elec1 , etud3) into ClasseEtudiant

!create dept:Departement
!set dept.nom := 'economie'

!create prof3:ChefDepartement
!set prof3.nom := 'BIBA'
!set prof3.prenom := 'Etienne'
!set prof3.aEntree := 2003
!set prof3.grade := #doctorat
!insert(dept, prof3) into DepartementChefDepartement
!insert(compta, prof3) into FormationProfesseur

!create compta:Formation
!set compta.nom := 'comtabilite'
!insert (dept, compta) into DepartementFormation

!create cla : Classe
!set cla.niveau := #licence1
!insert(compta , cla) into FormationClasse

!create etud2:Etudiant
!set etud2.nom := 'MOULOKI'
!set etud2.prenom := 'Providence'
!set etud2.aEntree := 2014
!insert(cla , etud2) into ClasseEtudiant
