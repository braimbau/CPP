#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);	
		PresidentialPardonForm(const PresidentialPardonForm & src);
		virtual	~PresidentialPardonForm();
		void subExecute(Bureaucrat const & executor) const;
		PresidentialPardonForm &	operator=(const PresidentialPardonForm & rhs);

	private:
		std::string _target;
};

#endif
