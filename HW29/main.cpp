#include <iostream>
using namespace std;


class Shape
{
public:
	virtual double CalculateArea() = 0;
	virtual void Print() = 0;
};

class Rectangle : public Shape
{
private:
	double width;
	double height;
public:
	Rectangle() : width(0.0), height(0.0) {}

	Rectangle(double width, double height) : width(width), height(height) {}

	virtual double CalculateArea() override
	{
		return width * height;
	}

	virtual void Print() override
	{
		cout << endl << "Shape: Rectangle" << ", Width: " << width << ", Height: " << height << endl;
	}
};

class Circle : public Shape
{
private:
	double radius;
public:
	Circle() : radius(0.0) {}

	Circle(double radius) : radius(radius) {}

	virtual double CalculateArea() override
	{
		return 3.14 * (radius * radius);
	}

	virtual void Print() override
	{
		cout << endl << "Shape: Circle" << ", Radius: " << radius << endl;
	}
};

class Triangle : public Shape
{
private:
	double base;
	double height;
public:
	Triangle() : base(0.0), height(0.0) {}

	Triangle(double base, double height) : base(base), height(height) {}

	virtual double CalculateArea() override
	{
		return (base * height) / 2;
	}

	virtual void Print() override
	{
		cout << endl << "Shape: Triangle" << ", Base: " << base << ", Height: " << height << endl;
	}
};


class Animal
{
public:
	virtual void MakeSound() = 0;
	virtual void PrintInfo() = 0;
};

class Dog : public Animal
{
public:
	virtual void MakeSound() override
	{
		cout << endl << "Woof!" << endl;
	}

	virtual void PrintInfo() override
	{
		cout << endl << "It`s a dog." << endl;
	}
};

class Cat : public Animal
{
public:
	virtual void MakeSound() override
	{
		cout << endl << "Meow!" << endl;
	}

	virtual void PrintInfo() override
	{
		cout << endl << "It`s a cat." << endl;
	}
};

class Bird : public Animal
{
public:
	virtual void MakeSound() override
	{
		cout << endl << "Chirp!" << endl;
	}

	virtual void PrintInfo() override
	{
		cout << endl << "It`s a bird." << endl;
	}
};


class Account
{
protected:
	double balance;
public:
	Account(double balance) : balance(balance) {}

	virtual void CalculateInterest() = 0;

	virtual void Deposit(double amount)
	{
		balance += amount;
	}

	virtual void Print()
	{
		cout << endl << balance << endl;
	}
};

class SavingsAccount : public Account
{
private:
	double interestRate = 0.05;
public:
	SavingsAccount(double balance) : Account(balance) {}

	virtual void CalculateInterest() override
	{
		balance += balance * interestRate;
	}
};

class CheckingAccount : public Account
{
private:
	double feeRate = 0.02;
public:
	CheckingAccount(double balance) : Account(balance) {}

	virtual void CalculateInterest() override
	{
		double feeCurrent = balance * feeRate;

		balance -= feeCurrent;
	}
};

class FixedDepositAccount : public Account
{
private:
	double highestRate = 0.10;
public:
	FixedDepositAccount(double balance) : Account(balance) {}

	virtual void CalculateInterest() override 
	{
		double interest = balance * 0.10;
		balance += interest;
	}

	virtual void Deposit(double amount)
	{
		balance += amount;
	}

	void Withdraw()
	{
		cout << endl << "Error" << endl;
	}
};

int main()
{
	/*Rectangle rect(15, 20);
	Circle circ(21);
	Triangle tri(12, 30);

	const int SIZE = 3;

	Shape* test[SIZE] = { &rect, &circ, &tri };

	for (int i = 0; i < SIZE; i++)
	{
		test[i]->Print();
		cout << test[i]->CalculateArea() << endl;
	}*/




	/*Dog dog;
	Cat cat;
	Bird bird;

	const int SIZE = 3;

	Animal* animals[SIZE] = { &dog, &cat, &bird };

	for (int i = 0; i < SIZE; i++)
	{
		animals[i]->MakeSound();
		animals[i]->PrintInfo();
	}*/




	/*SavingsAccount sa(1500);
	FixedDepositAccount fda(500);
	CheckingAccount ca(1000);

	const int SIZE = 3;

	Account* accounts[SIZE] = {&sa, &fda, &ca};

	for (int i = 0; i < SIZE; i++)
	{
		accounts[i]->Deposit(500);
		accounts[i]->CalculateInterest();
		accounts[i]->Print();
	}*/
}