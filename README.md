# Inheritance

This project is shows off concepts about one fundamental principle of the OOP, the inheritance.
## Table of Contents

- [Inheritance](#inheritance)
  - [Table of Contents](#table-of-contents)
  - [About the Project](#about-the-project)
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

What is inheritance
* Inheritance is the capability of class to derive characteristics or properties from another class.
* The concept of reusability in C++ is supported using inheritance
* We can reuse the properties of an existing class by inheriting it
* The new class which is inherited from the base class is called a derived class

There are different types of inheritance in C++

    Single Inheritance
A derived class is inherited with only one base class.
```
class Employee
{
  private:
    int age;
    string name;
    ...
  public:
    int get_age();
    ...  
};

class Programmer : public Employee  // use the colon ":" to indicate inheritance
{
  
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

Get Others Involved in Your Project with a CONTRIBUTING Guide