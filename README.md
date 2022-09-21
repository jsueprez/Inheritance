# Inheritance

This project is shows off concepts about one fundamental principle of the OOP, the inheritance.
## Table of Contents

- [Inheritance](#inheritance)
  - [Table of Contents](#table-of-contents)
  - [About the Project](#about-the-project)
    - [INHERITANCE](#inheritance-1)
    - [ACCESS MODIFIER](#access-modifier)
    - [CONSTRUCTORS & DESTRUCTOR](#constructors--destructor)
    - [SPECIAL SYNTAX](#special-syntax)
  - [Project Status](#project-status)
  - [Getting Started](#getting-started)
    - [Dependencies](#dependencies)
    - [Getting the Source](#getting-the-source)
    - [Building](#building)
    - [Running Tests](#running-tests)
      - [Other Tests](#other-tests)
    - [Installation](#installation)
    - [Usage](#usage)
  - [Release Process](#release-process)
    - [Versioning](#versioning)
    - [Payload](#payload)
  - [How to Get Help](#how-to-get-help)
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
* Base classes can be inherited by derived classes using 3 types of vissibility,  ```private ```, ``` public ``` and ``` protected ```.
* By default, if you don't specify the vissibility  after the ``` : ``` the base class is inherited in private mode.

|                   | Public Derivation | Private Derivation | Protected Derivation |
| ----------------- | ----------------- | :----------------: | :------------------: |
| Private members   | Not Inherited     |   Not Inherited    |    Not Inherited     |
| Protected members | Protected✅        |      Private⛔️      |      Protected✅      |
| Public members    | Public✅           |      Private⛔️      |      Protected✅      |

NOTE: ✅ Can be accessed in the derived class
      ⛔️ Can NOT be accessed in the derived class

### CONSTRUCTORS & DESTRUCTOR
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



Here you can provide more details about the project
* What features does your project provide?
* Short motivation for the project? (Don't be too long winded)
* Links to the project site

```

```

**[Back to top](#table-of-contents)**

## Project Status

Show the build status if you have a CI server:

[![Build Status](http://your-server:12345/job/badge/icon)](http://your-server/job/badge/icon/)

Describe the current release and any notes about the current state of the project. Examples: currently compiles on your host machine, but is not cross-compiling for ARM, APIs are not set, feature not implemented, etc.

**[Back to top](#table-of-contents)**

## Getting Started

This section should provide instructions for other developers to

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Dependencies

Describe what software and libraries you will need to install in order to build and use this project. Provide details on how to resolve these dependencies.

Remember: `git-lfs` is a dependency that developers will need to resolve before they can get started with a repository using LFS.

```
Examples should be included
```

### Getting the Source

Include a link to your GitHub repository (you have no idea how people will find your code), and also a summary of how to clone.

This project is [hosted on GitHub](https://github.com/embeddedartistry/embedded-resources). You can clone this project directly using this command:

```
git clone git@github.com:embeddedartistry/templates.git
```

### Building

Instructions for how to build your project

```
Examples should be included
```

### Running Tests

Describe how to run unit tests for your project.

```
Examples should be included
```

#### Other Tests

If you have formatting checks, coding style checks, or static analysis tests that must pass before changes will be considered, add a section for those and provide instructions

### Installation

Instructions for how to install your project's build artifacts

```
Examples should be included
```

### Usage

Instructions for using your project. Ways to run the program, how to include it in another project, etc.

```
Examples should be included
```

If your project provides an API, either provide details for usage in this document or link to the appropriate API reference documents

**[Back to top](#table-of-contents)**

## Release Process

Talk about the release process. How are releases made? What cadence? How to get new releases?

### Versioning

This project uses [Semantic Versioning](http://semver.org/). For a list of available versions, see the [repository tag list](https://github.com/your/project/tags).

### Payload

**[Back to top](#table-of-contents)**

## How to Get Help

Provide any instructions or contact information for users who need to get further help with your project.

## Contributing

Provide details about how people can contribute to your project. If you have a contributing guide, mention it here. e.g.:

We encourage public contributions! Please review [CONTRIBUTING.md](docs/CONTRIBUTING.md) for details on our code of conduct and development process.

**[Back to top](#table-of-contents)**

## Further Reading

Provide links to other relevant documentation here

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

Related

Your Project is Great, So Let’s Make Your README Great Too

Get Others Involved in Your Project with a CONTRIBUTING Guide*
