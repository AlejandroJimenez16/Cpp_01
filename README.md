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
- Difference between stack and heap memory  
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
- `name`

*Public methods:*
- `announce()`

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
