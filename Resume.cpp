Constructeur:

class HumanB {
	public:

		HumanB(std::string name);
		~HumanB(void);

		void	attack();
		void	setWeapon(Weapon &w);

	private:

		std::string	_name;
		Weapon		*_weapon;
};

HumanB::HumanB(std::string name)
	: _name(name), _weapon(NULL)
{
}


Heritage:

#ifndef		DIAMONDTRAP_HPP
# define	DIAMONDTRAP_HPP

//mother class
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

		std::string		_name;

	public:

		DiamondTrap();
		DiamondTrap(const std::string	name);
		DiamondTrap(const DiamondTrap &s);
		DiamondTrap &operator=(const DiamondTrap &s);
		~DiamondTrap();

		void whoAmI();
		void attack(const std::string& target);
};

#endif

DiamondTrap::DiamondTrap(const std::string	name)
	: ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << "Constructor DiamondTrap called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &s)
{
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
	*this = s;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &s)
{
	std::cout << "Copy assignment operator DiamondTrap called" << std::endl;
	if (this != &s)
	{
		ClapTrap::operator=(s);
		_name = s._name;
	}
	return (*this);
}

#include <string>
#include <iostream>
#include "Brain.hpp"

#ifndef		AANIMAL_HPP
# define	AANIMAL_HPP

class AAnimal
{
	protected:

		std::string		_type;
		// Brain			*_brain;

	public:

		AAnimal();
		AAnimal(const std::string	type);
		AAnimal(const AAnimal &a);
		virtual AAnimal &operator=(const AAnimal &a);
		virtual ~AAnimal();

		virtual std::string getType() const;
		virtual void makeSound() const = 0;
		virtual Brain &getBrain() = 0;

};

#endif

class Form;

class Bureaucrat
{
	private:

		const std::string	_name;
		int		_grade;

		const static int minGrade = 150;
		const static int maxGrade = 1;

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ();
		};

		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat &operator=(const Bureaucrat &b);
		~Bureaucrat();

		const std::string	getName(void) const;
		int			getGrade(void) const;
		void		promote();
		void		demote();
		void		signForm(Form &f);

};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);

Bureaucrat::Bureaucrat(const std::string name, int grade)
	: _name (name), _grade(grade)
{
	std::cout << "Constructor called for " << _name << std::endl;
	if (_grade < Bureaucrat::maxGrade )
		throw GradeTooHighException();
	if (_grade > Bureaucrat::minGrade )
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		this->_grade = b._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat '" << _name << "' destructed" << std::endl;
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

#include <string>
#include <iostream>

#ifndef AFORM_HPP
# define	AFORM_HPP

class Bureaucrat;

class AForm
{
	private:

		const std::string	_name;
		bool				_isSigned;
		int					_minGradeSignature;
		int					_minGradeExecution;

	protected:

		virtual void		doExecution() const = 0;

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("grade is too hight.");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("grade is too low.");
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
			virtual const char * what() const throw ()
			{
				return ("Form is not signed");
			}
		};

		class FormAlreadySignedException : public std::exception
		{
			public:
			virtual const char * what() const throw ()
			{
				return ("Form is already signed");
			}
		};

		AForm();
		AForm(const std::string name, int _minGradeSignature, int _minGradeExecution);
		AForm(const AForm &f);
		AForm &operator=(const AForm &f);
		virtual ~AForm();

		const std::string	&getName(void) const;
		bool				getSignedStatus(void) const;
		int					getMinGradeSignature(void) const;
		int					getMinGradeExecution(void) const;

		void				beSigned(const Bureaucrat &b);
		void				execute(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &o, const AForm &f);

#endif

// children classes: PresidentialPardonForm, RobotomyRequestForm, ShrubberyCreationForm


Vous remarquerez que le nom de la classe de base est précédé de public. Pour l'héritage, tout est par défaut fixé à private. Si la classe de base n'était pas précédée par public, cela signifierait que tous les membres publicde la classe de base seraient privatedans la classe dérivée. Ce n'est presque jamais ce que vous souhaitez En Java, le compilateur ne vous laissera pas décroître l'accès à un membre pendant le processus d'héritage.; le résultat désiré est de conserver tous les membres publicde la classe de base comme publicdans la classe dérivée. Vous faites cela en utilisant le mot-clé publicpendant l'héritage.
