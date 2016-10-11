#ifndef CAT_H_
#define CAT_H_

class Cat {
private: 
	// These cannot be changed outside of the class
	int age;
public:
	// These can be changed outside of the class
	bool happy;
	void speak();
	void setAge(int i);
	int getAge();
};

#endif /* CAT_H_ */