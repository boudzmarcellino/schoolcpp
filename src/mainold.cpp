//#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
//#include <jdbc/cppconn/driver.h> 
//#include <jdbc/cppconn/exception.h>
//#include <jdbc/cppconn/resultset.h>
//#include <jdbc/cppconn/statement.h>

#include "Personne.hpp"
#include "Etudiant.hpp"
#include "Professeur.hpp"


#define hostName "hostname"
#define userName "root"
#define password "MySql"

int main()
{
    std::cout << "Debut du programme "<< std::endl;
    Personne p("1234" , "Boudz" , "Lino");
    Etudiant e("2345" , "El" , "Lino" , "5432");
    std::ofstream fichier("rendu.txt" , std::ios::out);
    if(fichier) { std::cout << "c'est bon" << std::endl; }
    else { std::cout <<"c'est pas bon" << std::endl; }
    fichier << &p << p.description() << std::endl;
    fichier << &e << e.description() << std::endl;

    //sql::Driver*driver;
    //driver = get_driver_instance();

    //sql::Connection* con;
    //con = driver->connect(hostName, userName, password); 
    std::cout << "Fin du programme "<< std::endl;
    return 0;
}   
