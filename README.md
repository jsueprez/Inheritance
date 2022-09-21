# Inheritance

This project shows off concepts about one fundamental principle of the OOP, the inheritance.
## Table of Contents

- [Inheritance](#inheritance)
  - [Table of Contents](#table-of-contents)
  - [About the Project](#about-the-project)
    - [INHERITANCE](#inheritance-1)
    - [ACCESS MODIFIER](#access-modifier)
    - [CONSTRUCTOR & DESTRUCTOR](#constructor--destructor)
    - [SPECIAL SYNTAX](#special-syntax)
  - [Contributing](#contributing)
  - [Further Reading](#further-reading)
  - [License](#license)
  - [Authors](#authors)
  - [Acknowledgments](#acknowledgments)

## About the Project
### INHERITANCE
* Inheritance is the capability of class to derive characteristics or properties from another class.
* The concept of reusability in C++ is supported using inheritance
* We can reuse the properties of an existing class by inheriting it
* The new class which is inherited from the base class is called a derived class
* In the derived class you should list only additional member variables and functions, no need to repeat things from base class, only things that you are adding or overriding.
### ACCESS MODIFIER
* Base classes can be inherited by derived classes using 3 types of visibility,  ```private ```, ``` public ``` and ``` protected ```.
* By default, if you don't specify the visibility after the ``` : ```, the base class is inherited in private mode.

|                   | Public Derivation | Private Derivation | Protected Derivation |
| ----------------- | ----------------- | :----------------: | :------------------: |
| Private members   | Not Inherited     |   Not Inherited    |    Not Inherited     |
| Protected members | Protected         |      Private       |      Protected       |
| Public members    | Public            |      Private       |      Protected       |

NOTE: 
* A member (either data member or member function) declared in a ```private``` section of a class can only be accessed by member functions and friends of that class.
* A member (either data member or member function) declared in a ```protected``` section of a class can only be accessed by member functions and friends of that class, and by member functions and friends of derived classes
* A member (either data member or member function) declared in a ```public``` section of a class can be accessed by anyone

### CONSTRUCTOR & DESTRUCTOR
* If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
* If there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
* Use the colon ":" after the name class declaration to indicate inheritance.
* If both base and derived classes have constructors, base class constructor is executed first. The opposite happens with the destructor, they are called from inner to outer.
* In multiple inheritance, base classes are constructed in the order in which they appear in the class deceleration. For example if there are three classes “A”, “B”, and “C”, and the class “C” is inheriting classes “A” and “B”,then the constructor of class “A” will be executed first. But if the class “B” is written before class “A” then the constructor of class “B” will be executed first.
### SPECIAL SYNTAX
* C++ supports a special syntax for passing arguments to multiple base classes
* The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
* The body is called after the constructors is finished executing
``` C++
 Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
  
}
```

There are different types of inheritance in C++

    Single Inheritance
A derived class is inherited with only one base class.

Key Takeaways:

``` C++
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Employee
{
  public:
    int id;
    float salary;
    Employee(int input_id)
    {
        id = input_id;
        salary = 600;
    }
    Employee() {} 
};

class Programmer : public Employee
{
  public:
    string languageCode;
    Programmer(int input_id) : Employee(input_id)
    {
      languageCode = "C++";
    }
    void print_id()
    {
      cout << id << endl;
    }
};
```
    Multiple Inheritance
    Hierarchical Inheritance
    Multilevel Inheritance
    Hybrid Inheritance

**[Back to top](#table-of-contents)**
## Contributing

Provide details about how people can contribute to your project. If you have a contributing guide, mention it here. e.g.:

We encourage public contributions! Please review [CONTRIBUTING.md](docs/CONTRIBUTING.md) for details on our code of conduct and development process.

**[Back to top](#table-of-contents)**

## Further Reading
[```friend ``` modifier] (https://isocpp.org/wiki/faq/friends)

**[Back to top](#table-of-contents)**

## License

Copyright (c) 

This project is licensed under the XXXXXX License - see [LICENSE.md](LICENSE.md) file for details.

**[Back to top](#table-of-contents)**

## Authors

* **[Antonio Perez](https://github.com/jsueprez)** - *Initial work* -

Also see the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

**[Back to top](#table-of-contents)**

## Acknowledgments

Provide proper credits, shout-outs, and honorable mentions here. Also provide links to relevant repositories, blog posts, or contributors worth mentioning.

**[Back to top](#table-of-contents)**