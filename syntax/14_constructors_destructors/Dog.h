#ifndef DOG_H_
#define DOG_H_


class Dog {
private:
	std::string name;
	bool happy;
public:
	void bark();

	// Constructors don't have return types
	Dog();

	// Destructors
	~Dog();

};


#endif /* DOG_H_ */