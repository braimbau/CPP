#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);	
		RobotomyRequestForm(const RobotomyRequestForm & src);
		virtual	~RobotomyRequestForm();
		void subExecute(Bureaucrat const & executor) const;
		RobotomyRequestForm &	operator=(const RobotomyRequestForm & rhs);

	private:
		std::string _target;
};

#endif
