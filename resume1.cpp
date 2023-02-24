/* ***************** LE HPP AVEC LA DECLARATION D'UNE CLASS ***************** */

#ifndef MACLASS_HPP
# define MACLASS_HPP

#include <string> //pour les string
#include <iostream> //pour l'affichage cout cin ...

class MaClass1; //declaration d-une class utilisee dans la class mais sans
				// affiliation

class	MaClass
{
	private : // accessible que par la classe elle-meme

		int			_unChiffre;
		std::string	_uneString;

	protected : //accessible que par la classe et ses enfants

		// virtual = va chercher la fonction de la derniere generation
		virtual void	uneFonction() const;

	public : //accessible directement par tous


		//definition d'une exception
		class MonException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		MaClass(); //constructeur par defaut sans argument
		MaClass(int unNombre, std::string duTexte); //constructeur avec arguments
		MaClass(const MaClass &uneInstance); //constucteur par copie
		MaClass &operator=( const MaClass &rhs); //surcharge de l'op. =
		// rhs : right hand side : ce qui est situe a droite du =
		~MaClass(); //destructeur;

		int			unChiffrePublique;

		//fonctions publiques = methodes publique
		std::string	getString() const;
		//const a la fin annonce que la fonction ne modifie pas les variables
		// et empeche la compilation si une modif tente d'etre faite.
		void		setUnChiffre(int n);
		void		actionOne(MaClass1 const &class1);
};

std::ostream &operator<<(std::ostream &o, const MaClass &uneInstance);

#endif


// version sans commentaire pour copie
#ifndef MACLASS_HPP
# define MACLASS_HPP

# include <string>
# include <iostream>

class	MaClass
{
	private:

		int			_unChiffre;
		std::string	_uneString;

	protected :

		virtual void	uneFonction() const;

	public :


		class MonException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		MaClass();
		MaClass(int unNombre, std::string duTexte);
		MaClass(const MaClass &uneInstance);
		MaClass &operator=( const MaClass &rhs);
		~MaClass();

		int			unChiffrePublique;

		std::string	getString() const;
		void		setUnChiffre(int n);
		void		actionOne(MaClass1 const &class1);
};

std::ostream &operator<<(std::ostream &o, const MaClass &uneInstance);

#endif

/* *** LE CPP AVEC LES DEFINITIONS DES PRINCIPALES FONCTIONS D'UNE CLASS  *** */

// constructeur par defaut
MaClass::MaClass()
	: _unChiffre(42), _uneString("quelle ecole!"), unChiffrePublique(0)
{}

// plus ou moins equivalent a (moins optimum car fait en 2 temps):
MaClass::MaClass()
{
	this->_unChiffre = 42;
	this->_uneString = "quelle ecole!";
	this->unChiffrePublique = 0;
}

//constructeur avec argument avec une condition sur un des arguments
MaClass::MaClass(int unNombre, std::string duTexte)
	:_uneString(duTexte), unChiffrePublique(0)
{
	if (unNombre > 10)
		this->_unChiffre = unNombre;
	else
		this->_unChiffre = 42;
}

//constucteur par copie
MaClass::MaClass(const MaClass &uneInstance)
	:_unChiffre(uneInstance._unChiffre)
{
	*this = uneInstance; // fait appel a l'operateur = qu'on surcharge
}

// surcharge de l'operateur =
MaClass &MaClass::operator=( const MaClass &rhs)
{

	if (this != &rhs)
	{
		this->_uneString = rhs._uneString;
		this->unChiffrePublique = rhs.unChiffrePublique;
	}
	return (*this);
}

//destructeur
MaClass::~MaClass()
{
	//ne pas oublier les "delete" s'il y a eu des new dans le constructeur!
}


std::string	MaClass::getString() const
{
	return (this->_uneString);
}

void	MaClass::setUnChiffre(int n)
{
	this->_unChiffre = n;
}

const char *MaClass::MonException::what() const throw()
{
	return ("mon super message d'erreur");
}

// surcharge de l'operateur "<<" de ostream. permet de retourner un texte sur
// les sorties appelee
std::ostream &operator<<(std::ostream &o, const MaClass &uneInstance)
{
	o << uneInstance.getString() << " oui c'est clair " ;
	return (o);
}

/* **************************** UTILISATION ********************************* */

int main()
{
	MaClass MonInstance(82, "lol");

	MonInstance.getString();
	return 0;
}


/* ************************ DES CAS PARTICULIERS **************************** */
/* ************************************************************************** */
// CLASS ABSTRAITE

class AMaClassAbstraite
{
	... comme dans une classe standard

	virtual int	uneMethodeVituellePure() = 0;

	// = 0; indique que cette methode DOIT etre definie dans les classes filles
	// cette methode n'est pas definie dans la classe mere.
}

/* ************************************************************************** */
// CLASS INTERFACE

class IMaClass
{
	virtual int	uneMethodeVituellePure() = 0;
	virtual int	uneAutreMethodeVituellePure() = 0;
	virtual int	uneDerniereMethodeVituellePure() = 0;

	// si toute les methodes sont virtuelles pure et qu'il n'y a pas d'attibut
}

/* ************************************************************************** */
// CLASS STATIQUE

//une class est dite statique lorsque toute ses methodes specifiques sont statiques
// et qu'il y a aucune variable. les constructeurs sont mis en "private" car aucune
// instance de cette classe ne doit etre cree.

// par exemple

class Serializer
{
	private:

		Serializer();
		Serializer(const Serializer &s);
		Serializer &operator=(const Serializer &s);

	public:

		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

// pour utiliser les methodes ont met simplement MaClassStatic::maMethode() par exemple:

std::cout <<"deserialize :" << Serializer::deserialize(intptr) << std::endl;


// Il peut z avoir des fonctions ou des variables statique dans une class "standard"
// l'initialisation des variable se fait en haut du cpp correspondant par exemple

// dans le hpp:
static t_MateriaList *_MateriaList;

// dans le cpp:
t_MateriaList *AMateria::_MateriaList = NULL;

// les fonctions s'utilisent comme dans l'exemple de la class "completement" statique


/* ************************************************************************** */
// HERITAGE

// il faut mettre en public les class mere sinon d'office tous ses composants
// seront en prive

class MaClassFille : public MaClassMere, public MonAutreClassMere
{
	....
}

// !! si les class mere sont elles aussi des class fille alors il faut declarer
// la grand mere comme virtuelle afin de ne pas creer des doublons.

class MaClassMere : public virtual MaClassGrandMere
{...}

// Exemple de constructeur avec heritage multiple

DiamondTrap::DiamondTrap(const std::string	name)
	: ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << "Constructor DiamondTrap called for " << _name << std::endl;
}

// exemples de surcharge d'une methode dans la class fille en faisant appel a la
// class mere

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

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

// exemple de l'appel d'une variable fixee dans la mere

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " << _name << " " << ClapTrap::_name << std::endl;
}


/* ************************************************************************** */

// TEMPLATE

// fonction template exemple

template<typename T>
T const	&max(T const &x, T const &y)
{
	return ((x>y) ? x : y);
}

// & passer par reference: toujours le faire si possible pour economiser de la memoire
// const : a utiliser si on ne modifie pas les valeurs pour eviter toutes modifications
// non desirees

// utilisation

std::cout << max<int>(a, b) << std::endl; //=> explicite
std::cout << max(a, b) << std::endl; //=> implicite

// toujours preferer l'exlicite

