#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &existing);
	~Bureaucrat(void);

	std::string getName(void) const;
	int getGrade(void) const;

	Bureaucrat& operator = (Bureaucrat const &existing);

	void incrementGrade(void); 
	void decrementGrade(void);

	void signForm(Form &paper);


	class GradeTooHighException: public std::exception
	{
	public:

		const char * what() const throw()
		{
			return ("Grade too high!");
		}
	};

	class GradeTooLowException: public std::exception
	{
	public:

		const char * what() const throw()
		{
			return ("Grade too low!");
		}
	};

};

#endif