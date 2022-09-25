#include<conio.h>
#include<iostream>
using namespace std;
class Animal{
	public:
	Animal()
	{
		cout<<"Animal() insenciated\n";
	}
	virtual char* speak()
	{
		return"Animal speak() called\n";
	}
	virtual ~Animal()
	{
		cout<<"~Animal() insenciated\n";
	}
};
class Dog:public Animal
{
	public:
		Dog()
		{
			cout<<"Dog() insenciated\n";
		}
		char* speak()
		{
			return "woof!!\n";
		}
		~Dog()
		{
			cout<<"~Dog() insenciated\n";
		}
};
class Cat:public Animal
{
	public:
		Cat()
		{
			cout<<"Cat() insenciated\n";
		}
		char*speak()
		{
			return"mew!!\n";
		}
		~Cat()
		{
			cout<<"~Cat() insenciated\n";
		}
};
class Sheep:public Animal
{
public:
	Sheep()
		{
			cout<<"Sheep() insenciated\n";
		}
		char*speak()
		{
			return"bleat!!\n";
		}
		~Sheep()
		{
			cout<<"~Sheep() insenciated\n";
		}
};
class Cow:public Animal
{
public:
	Cow()
		{
			cout<<"Cow() insenciated\n";
		}
		char*speak()
		{
			return"moo!!\n";
		}
		~Cow()
		{
			cout<<"~Cow() insenciated\n";
		}
};
class Horse:public Animal
{
public:
	Horse()
		{
			cout<<"Horse() insenciated\n";
		}
		char*speak()
		{
			return"neigh!!\n";
		}
		~Horse()
		{
			cout<<"~Horse() insenciated\n";
		}
};
int main()
{
Animal objAnimal;
Dog objDog;
Animal *ptrAnimal = &objAnimal;
Dog *ptrDog = &objDog;
cout << objAnimal.speak() << endl;
cout << objDog.speak() << endl;
cout << ptrAnimal->speak() << endl;
cout << ptrDog->speak() << endl;
ptrDog->Animal::speak();
Dog lassie;
Animal *myPet = &lassie;
cout << myPet->speak() << endl;
const int size = 2;
Animal * myPets[size];
Cat whiskers;
Dog mutley;
myPets[0] = &whiskers;
myPets[1] = &mutley;
for(int i=0; i<size; i++)
cout << myPets[i]->speak() << endl;
int i = 0;
while (i<size)
{
cout << "Press 1 for a Dog and 2 for a Cat." << endl ;
switch (getch())
{
case '1':
myPets[i] = new Dog;
cout << "Dog added at position "<< i <<endl<<endl;
i++;
break;
case '2':
myPets[i] = new Cat;
cout << "Cat added at position "<< i <<endl<<endl;
i++;
break;
default:
cout<<"Invalid input. Enter again." <<endl<<endl;
break;
}
}
} 

