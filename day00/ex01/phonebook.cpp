#include "Phonebook.hpp"

std::string Phonebook::getfirst_name(){return this->first_name;}
std::string Phonebook::getlast_name() { return this->last_name; }
std::string Phonebook::getnickname(){return this->nickname;}
std::string Phonebook::getlogin(){return this->login;}
std::string Phonebook::getpostal_address(){return this->postal_address;}
std::string Phonebook::getemail_address(){return this->email_address;}
std::string Phonebook::getphone_number(){return this->phone_number;}
std::string Phonebook::getbirth_date(){return this->birth_date;}
std::string Phonebook::getfavorite_meal(){return this->favorite_meal;}
std::string Phonebook::getunderwear_color(){return this->underwear_color;}
std::string Phonebook::getdarkest_secret(){return this->darkest_secret;}
void Phonebook::setfirst_name(std::string value){this->first_name = value;}
void Phonebook::setlast_name(std::string value){this->last_name = value;}
void Phonebook::setnickname(std::string value){this->nickname = value;}
void Phonebook::setlogin(std::string value){this->login = value;}
void Phonebook::setpostal_address(std::string value){this->postal_address = value;}
void Phonebook::setemail_address(std::string value){this->email_address = value;}
void Phonebook::setphone_number(std::string value){this->phone_number = value;}
void Phonebook::setbirth_date(std::string value){this->birth_date = value;}
void Phonebook::setfavorite_meal(std::string value){this->favorite_meal = value;}
void Phonebook::setunderwear_color(std::string value){this->underwear_color = value;}
void Phonebook::setdarkest_secret(std::string value){this->darkest_secret = value;}