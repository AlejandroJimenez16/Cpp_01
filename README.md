# CPP Module 01 - Memory allocation, pointers to members, references and switch statements

## Objective

The goal of `CPP Module 01` is to introduce memory allocation (stack vs heap), 
pointers and references, pointer to member functions, and the use of the switch statement in C++.

## Project structure

```
CPP_Module_01/
├── ex00/          # BraiiiiiiinnnzzzZ - Heap vs Stack
├── ex01/          # Moar brainz! - Multiple object allocation
├── ex02/          # HI THIS IS BRAIN - Reference vs Pointer
├── ex03/          # Unnecessary violence - References vs Pointers in classes
├── ex04/          # Sed is for losers - File string replacement
├── ex05/          # Harl 2.0 - Pointers to member functions
├── ex06/          # Harl filter - Switch statement
└── README.md      # This file 
```

## Exercises

### ex00: BraiiiiiiinnnzzzZ

**Description:**
This exercise consists of a program that demonstrates the difference between stack and heap memory allocation.

**What you will learn:**
- Difference between **stack and heap** memory
- How objects are allocated and destroyed
- Basic memory management in C++

**Program functionality:**
- Create Zombie objects on the stack and on the heap
- Call a function to make each Zombie “announce” itself
- Properly delete heap-allocated Zombies
- Observe object lifetimes as Zombies “die” after going out of scope or being deleted

**Class design:**

**Zombie**

*Private attributes:*
- `std::string name`

*Public methods:*
- `void announce(void)`

*Functions:*
- `Zombie* newZombie(std::string name)`: Creates a Zombie on the **heap** and returns a pointer.
- `void randomChump(std::string name)`: Creates a Zombie on the **stack** and immediately announces it.

**Example usage:**

```bash
$ ./zombieTest
# Output
alejandj: BraiiiiiiinnnzzzZ...
Alejandro: BraiiiiiiinnnzzzZ...
Alejandro [DEAD] ☠️
alejandj [DEAD] ☠️
```

---

### ex01: Moar brainz!

**Description:**
This exercise consists of creating and managing multiple Zombie objects using dynamic memory allocation.

**What you will learn:**
- How to allocate arrays of objects with `new[]`
- How to properly deallocate memory with `delete[]`
- Managing multiple objects in dynamic memory

**Program functionality:**
- Create a horde of Zombie objects
- Initialize each Zombie with a name
- Properly free allocated memory to avoid leaks

**Class design:**

**Zombie**

*Private attributes:*
- `std::string name`

*Public methods:*
- `void announce(void)`

*Functions:*
- `Zombie* zombieHorde(int N, std::string name)`: Creates a dynamically allocated array of Zombies on the heap using `new[]`, initializes each element with the given name, and returns a pointer to the first element.

**Example usage:**

```bash
$ ./hordeTest
# Output
Error: Invalid arguments
Args format: ./hordeTest <number_of_zombies> <name>

$ ./hordeTest 3 alejandj
# Output
alejandj: BraiiiiiiinnnzzzZ...
alejandj: BraiiiiiiinnnzzzZ...
alejandj: BraiiiiiiinnnzzzZ...
alejandj [DEAD] ☠️
alejandj [DEAD] ☠️
alejandj [DEAD] ☠️
```

---

### ex02: HI THIS IS BRAIN

**Description:**
This exercise consists of creating a string, a pointer to it, and a reference to it, then observing their behavior.

**What you will learn:**
- The difference between **pointers and references**
- How to access and modify a variable through a pointer or reference

**Program functionality:**
- Create a string, a pointer to it, and a reference to it
- Display their memory addresses and values to illustrate their differences

**Example usage:**

```bash
$ ./hiThisBrain
# Output
------------------------------------
Address of str:       0x7ffd3f7af4b8
Address held by PTR:  0x7ffd3f7af4b8
Address held by REF:  0x7ffd3f7af4b8
------------------------------------
Value of str:         HI THIS IS BRAIN
Value pointed by PTR: HI THIS IS BRAIN
Value pointed by REF: HI THIS IS BRAIN
------------------------------------
```

---

### ex03: Unnecessary violence

**Description:**
This exercise consists of implementing a Weapon class and two Human classes that interact with it using references and pointers.

**What you will learn:**
- When to use **references vs pointers** as class members
- Object composition and relationships
- How shared objects behave when modified

**Program functionality:**
- Implement Weapon, HumanA, and HumanB classes
- HumanA always has a Weapon (reference)
- HumanB may or may not have a Weapon (pointer)
- Demonstrate how changes in Weapon reflect in both humans

**Class design:**

**Weapon**

*Private attributes:*
- `std::string type`

*Public methods:*
- `const std::string& getType() const`
- `void setType(std::string type)`

**HumanA/B**

*Private attributes:*
- `std::string name`
- HumanA: `Weapon& weapon`
- HumanB: `Weapon* weapon`

*Public methods:*
- `void attack()`
- HumanB: `void setWeapon(Weapon& weapon)`

**Example usage:**

```bash
$ ./weaponTest
# Output
Bob attacks with their <crude spiked club>
Bob attacks with their <some other type of club>
Jim attacks with their <crude spiked club>
Jim attacks with their <some other type of club>
```

---

### ex04: Sed is for losers

**Description:**
This exercise consists of a program that replaces all occurrences of a string in a file with another string and writes the result to a new file.

**What you will learn:**
- File **input/output** using C++ streams
- String searching and manipulation without `std::string::replace`
- Error handling and argument validation

**Program functionality:**
- Read a file and create `<filename>.replace`
- Replace all occurrences of `s1` with `s2`
- Handle invalid input or file errors

**Example usage:**

```bash
$ ./sedIsForLosers
# Output
Error: Invalid arguments
Args format: ./sedIsForLosers <filename> <s1> <s2>

$ ./sedIsForLosers file.txt hello bye
# Input
hello word
hello 42

helloword
hello42

# Output
bye word
bye 42

byeword
bye42
```

---

### ex05: Harl 2.0

**Description:**
This exercise consists of implementing the Harl class with multiple complaints using pointers to member functions.

**What you will learn:**
- How to define and use **pointers to member functions** in C++  
- How to store member function pointers in an array and map them to string keys

**Program functionality:**
- Implement different complaint methods (`debug`, `info`, `warning`, `error`) in the Harl class
- Map string levels to these methods using pointers to member functions
- Call the appropriate method dynamically based on the input string

**Class design:**

**Harl**

*Private methods:*
- `void debug(void)`
- `void info(void)`
- `void warning(void)`
- `void error(void)`

*Public methods:*
- `void complain(std::string level)`

**Example usage:**

```bash
$ ./harl_2.0
# Output
I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!
I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!
I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.
This is unacceptable! I want to speak to the manager now.
```

---

### ex06: Harl filter

**Description:**
This exercise consists of filtering Harl’s complaints using a switch statement.

**What you will learn:**
- How to use the **switch statement** to control program flow based on a value
- How to handle **default cases** for invalid or unmatched input
- How to combine **switch statements** with pointers to member functions

**Program functionality:**
- Implement complaint methods (`debug`, `info`, `warning`, `error`) inside Harl
- Call the appropriate method dynamically based on a string input
- Use a switch statement to determine which method(s) to execute
- Execute **all levels equal or higher** than the specified one (fall-through behavior) 
- Handle unmatched input with a default message

**Class design:**

**Harl**

*Private methods:*
- `void debug(void)`
- `void info(void)`
- `void warning(void)`
- `void error(void)`

*Public methods:*
- `void complain(std::string level)`

**Example usage:**

```bash
$ ./harlFilter
# Output
Error: Invalid arguments
Args format: ./harlFilter <level>

$ ./harlFilter DEBUG
# Output
[ Probably complaining about insignificant problems ]

$ ./harlFilter INFO
# Output
[ DEBUG ]
I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!

[ INFO ]
I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!

[ WARNING ]
I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.

[ ERROR ]
This is unacceptable! I want to speak to the manager now.

```