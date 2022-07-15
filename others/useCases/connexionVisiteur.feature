nom : connexionVisiteur
resumé : Cette fonctionnalité permet la connexion d'un individu extérieur à l'établissement afin de faire certaines opérations
acteur : Visiteur 

contexte :
Scénario principal ou nominal:
    individu extérieur entre son id ou email pour identification avec le mot de passe
    le système vérifie que le compte de la session visiteur existe
    le système ouvre une session visiteur avce ce compte

Scénarios alternatifs:
    Alt1 : email entré par le visiteur non enregister
        le système indique au visiteur qu'il n'est pas enregister et propose au visiteur de s'enregistrer
    Alt2 : mot de passe erroné:
        message : mot de passe erroné, reste ${nombre} essai et redirige vers connexionInterface avec option mot de passe oublié

Scénarios erreurs:
    Err1 : ${nombre}==0
        message : Compte bloqué, veuillez réinitialiser votre mot de passe, avec options réinitialiser mot de passe et retour à l'accueil

contexte :
Contraintes:
besoins IHM:
    Interface : Connexion