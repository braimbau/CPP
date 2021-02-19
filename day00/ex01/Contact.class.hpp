#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		
		bool set_contact(void);
		void display_contact(void) const;
		std::string get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_nickname(void) const;
		std::string get_login(void) const;
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;

};

#endif
