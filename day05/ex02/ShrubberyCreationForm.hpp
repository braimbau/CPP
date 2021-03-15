#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);	
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		virtual	~ShrubberyCreationForm();
		void subExecute(Bureaucrat const & executor) const;
		ShrubberyCreationForm &	operator=(const ShrubberyCreationForm & rhs);

	private:
		std::string _target;
};

#endif
