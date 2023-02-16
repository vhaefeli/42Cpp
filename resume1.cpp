/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resume1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:44:51 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/16 10:25:32 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> //pour les string
#include <iostream> //pour l'affichage cout cin ...

class MaClass1; //declaration d-une class utilisee dans la class mais sans affiliation

class	MaClass	//
{
	private : // accessible que par la classe elle-meme

		int			_unChiffre;
		std::string	_uneString;

	protected : //accessible que par la classe et ses enfants

		virtual void	uneFonction() const;  // virtual = va chercher la fonction de la derni[re generation
	
	public : //accessible directement par tous

		//definition d'une exception
		class MonException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("un super texte d'erreur");
				}
		};

		MaClass(); //constructeur par defaut sans argument. a mettre en prive s'il faut toujours un argument
		MaClass(int unNombre); //constructeur avec argument
		MaClass(const MaClass &uneinstance); //constucteur par copie
		MaClass &operator=( const Maclass &uneinstance); //surcharge de l'operateur =
		~MaClass(); //destructeur;

		int			unChiffrePublique;

		const std::string	&getString() const; //une fonction publique 
		//const a la fin annonce que la fonction ne modifie pas les 




}
