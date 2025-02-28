/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:06:47 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/28 19:30:36 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Wrong.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void testWrongAnimal()
{
	std::cout << "\n--- Testing Wrong Animals ---" << std::endl;

	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // Va afficher le son de WrongAnimal, pas celui de WrongCat!
	meta->makeSound();

	delete meta;
	delete i;
}

void testDeepCopy()
{
	std::cout << "\n--- Testing Deep Copy ---" << std::endl;

	Dog originalDog;
	std::cout << "Creating a copy of the dog..." << std::endl;
	Dog copyDog = originalDog;

	std::cout << "Original dog address: " << &originalDog << std::endl;
	std::cout << "Copy dog address: " << &copyDog << std::endl;

}

void testAnimalArray()
{
	std::cout << "\n--- Testing Animal Array ---" << std::endl;

	const int count = 4; // Nombre d'animaux (pour faciliter les tests)
	Animal* animals[count];

	// Remplir la première moitié avec des chiens
	std::cout << "Creating dogs..." << std::endl;
	for (int i = 0; i < count/2; i++) {
		animals[i] = new Dog();
	}

	// Remplir la seconde moitié avec des chats
	std::cout << "Creating cats..." << std::endl;
	for (int i = count/2; i < count; i++) {
		animals[i] = new Cat();
	}

	// Faire des sons pour vérifier le polymorphisme
	std::cout << "\nMaking sounds..." << std::endl;
	for (int i = 0; i < count; i++) {
		animals[i]->makeSound();
	}

	// Supprimer tous les animaux
	std::cout << "\nDeleting animals..." << std::endl;
	for (int i = 0; i < count; i++) {
		delete animals[i]; // Devrait appeler le destructeur approprié
	}
}

int main()
{
	std::cout << "\n--- Testing Deep Copy ---" << std::endl;

	Animal a; ///tester virtual pure, ne peuc pas instancier 

	// Test de copie profonde avec Dog
	Dog originalDog;
	originalDog.setIdeas(0, "I love bones!");

	Dog copyDog = originalDog;  // Utilise le constructeur de copie

	// Affiche les adresses des cerveaux
	std::cout << "Original dog's brain address: " << originalDog.getAddress() << std::endl;
	std::cout << "Copy dog's brain address: " << copyDog.getAddress() << std::endl;

	// Affiche les idées
	std::cout << "Original dog's idea: " << originalDog.get_ideas(0) << std::endl;
	std::cout << "Copy dog's idea: " << copyDog.get_ideas(0) << std::endl;

	// Modifie l'idée du chien copié
	copyDog.setIdeas(0, "I prefer playing fetch!");

	// Vérifie que l'idée n'a changé que pour le chien copié
	std::cout << "After modification:" << std::endl;
	std::cout << "Original dog's idea: " << originalDog.get_ideas(0) << std::endl;
	std::cout << "Copy dog's idea: " << copyDog.get_ideas(0) << std::endl;

	// Test avec Cat
	Cat originalCat;
	originalCat.setIdeas(0, "I love fish!");

	Cat copyCat = originalCat;

	// Modifie l'idée du chat copié
	copyCat.setIdeas(0, "I prefer sleeping!");

	// Vérifie que les idées sont différentes
	std::cout << "\nCat ideas after modification:" << std::endl;
	std::cout << "Original cat's idea: " << originalCat.get_ideas(0) << std::endl;
	std::cout << "Copy cat's idea: " << copyCat.get_ideas(0) << std::endl;

	std::cout << "\n--- Testing Animal Array ---" << std::endl;

	const int count = 4; // 2 chiens + 2 chats
	Animal* animals[count];

	// Remplir la première moitié avec des Dogs
	std::cout << "Creating dogs..." << std::endl;
	for (int i = 0; i < count/2; i++) {
		animals[i] = new Dog();
	}

	// Remplir la seconde moitié avec des Cats
	std::cout << "Creating cats..." << std::endl;
	for (int i = count/2; i < count; i++) {
		animals[i] = new Cat();
	}

	// Faire des sons
	std::cout << "\nMaking sounds..." << std::endl;
	for (int i = 0; i < count; i++) {
		animals[i]->makeSound();
	}

	// Supprimer tous les animaux
	std::cout << "\nDeleting animals..." << std::endl;
	for (int i = 0; i < count; i++) {
		delete animals[i];
	}

	return 0;
}
