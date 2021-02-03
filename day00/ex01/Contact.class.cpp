#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::set_contact(void)
{
	std::string str;

	std::cout << "First name : ";
	std::getline(std::cin, str);
	this->first_name = str;
	std::cout << "Last name : ";
	std::getline(std::cin, str);
	this->last_name = str;
	std::cout << "Nickname : ";
	std::getline(std::cin, str);
	this->nickname = str;
	std::cout << "Login : ";
	std::getline(std::cin, str);
	this->login = str;
	std::cout << "Postal address : ";
	std::getline(std::cin, str);
	this->postal_address = str;
	std::cout << "Email address : ";
	std::getline(std::cin, str);
	this->email_address = str;
	std::cout << "Phone number : ";
	std::getline(std::cin, str);
	this->phone_number = str;
	std::cout << "Birthday date : ";
	std::getline(std::cin, str);
	this->birthday_date = str;
	std::cout << "Favorite meal : ";
	std::getline(std::cin, str);
	this->favorite_meal = str;
	std::cout << "Underwear color : ";
	std::getline(std::cin, str);
	this->underwear_color = str;
	std::cout << "Darkest secret : ";
	std::getline(std::cin, str);
	this->darkest_secret = str;
}

void	Contact::display_contact(void) const
{
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Login : " << this->login << std::endl;
	std::cout << "Postal address : " << this->postal_address << std::endl;
	std::cout << "Email address : " << this->email_address << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
	std::cout << "Birthday date : " << this->birthday_date << std::endl;
	std::cout << "Favorite meal : " << this->favorite_meal << std::endl;
	std::cout << "Underwear color : " << this->underwear_color << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
}
