# Inheritance

This project shows off concepts about one fundamental principle of the OOP, the inheritance.
## Table of Contents

- [Inheritance](#inheritance)
  - [Table of Contents](#table-of-contents)
  - [About the Project](#about-the-project)
    - [INHERITANCE](#inheritance-1)
    - [ACCESS MODIFIER](#access-modifier)
    - [CONSTRUCTOR & DESTRUCTOR](#constructor--destructor)
      - [Single Inheritance](#single-inheritance)
      - [Multiple Inheritance](#multiple-inheritance)
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
* Use the colon ":" after the name class declaration to indicate inheritance.
* Inheritance models an "is-a" relationship between two objects, diffrent than object-composition which models a "has-a" relationship.
### ACCESS MODIFIER
[Example](src/module/AccesModifier_VisibilityMode.h)
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
* A member (either data member or member function) declared in a ```public``` section of a class can be accessed by anyone.
* ```protected``` access modifier is most useful when you are your team are going to be the one deriving your own clases and the number of derived classes is reasonable, since when there is a change in the protected member(thetyep, what the value means, etc) of the base class, you will probably need to change both the base class and all the derived classes.  
* Best practice *Favor private members over protected members.*
* Best practice *Use public inheritance unless you have a specific reason to do otherwise.*

### CONSTRUCTOR & DESTRUCTOR
* If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
* If there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
* If both base and derived classes have constructors, base class constructor is executed first. The opposite happens with the destructor, they are called from inner to outer.
* In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration. For example if there are three classes “A”, “B”, and “C”, and the class “C” is inheriting classes “A” and “B”,then the constructor of class “A” will be executed first. But if the class “B” is written before class “A” then the constructor of class “B” will be executed first.

There are different types of inheritance in C++

#### Single Inheritance
[Example](src/module/singleInheritance.h)
A derived class is inherited with only one base class.
#### Multiple Inheritance
[Example](src/module/multipleInheritance.h)
A derived class is inherited with more than one base class.
* Multiple inheritance adds complexity.
* Ambiguity can result when multiple base classes contain a function with the same name. --> (Workaround using scoping)
* The Diamond problem, this occurs when a class multiply inherits from two classes which each inherit from a single base class. -->(Solved with virtual base classes)
* Best practice *Avoid multiple inheritance unless alternatives lead to more complexity.*

**[Back to top](#table-of-contents)**

## Further Reading
```friend ``` [modifier](https://isocpp.org/wiki/faq/friends)
[Polymorphism](https://www.learncpp.com/cpp-tutorial/virtual-functions/)

**[Back to top](#table-of-contents)**

## License

Copyright (c) 

This project is licensed under the XXXXXX License - see [LICENSE.md](LICENSE.md) file for details.

**[Back to top](#table-of-contents)**

## Authors

* **[Antonio Perez](https://github.com/jsueprez)** - *Initial work* -

**[Back to top](#table-of-contents)**
