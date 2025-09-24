# Polymorphism and Overloading in C++

## Aim
To understand and implement **overloading (polymorphism)** in C++, covering function, constructor, and operator overloading.

## Required Software
- Visual Studio Code  
- Windows or Linux operating system

---

## Theory

### What is Overloading?
In C++, **overloading** allows multiple functions or operators to share the same name but behave differently based on the arguments passed. It is a form of **compile-time polymorphism**, making the code more flexible and readable.

### Types of Overloading
1. **Function Overloading:** Functions with the same name but different parameters.  
2. **Constructor Overloading:** Multiple constructors with distinct parameter lists in a class.  
3. **Operator Overloading:** Redefining the behavior of existing operators for user-defined classes.

---

### 1. Function Overloading
**Definition:**  
You can declare several functions with the same name, as long as their parameter types or numbers differ.

**Rules:**  
- Must have different **number or type of parameters**.  
- Return type alone cannot differentiate overloaded functions.

**Benefits:**  
- Avoids multiple names for similar operations.  
- Makes code easier to read and maintain.

---

### 2. Constructor Overloading
**Definition:**  
A class can have multiple constructors, each taking different arguments, to allow creating objects in different ways.

**Rules:**  
- Constructors must differ in **number or type of parameters**.  
- Useful for initializing objects with varying default values or initial states.

**Advantages:**  
- More flexibility in object creation.  
- Supports default, parameterized, and copy constructors.

---

### 3. Operator Overloading
**Definition:**  
You can redefine how standard C++ operators behave for your custom classes.

**Rules:**  
- Only existing operators can be overloaded.  
- Precedence and number of operands (arity) cannot be changed.  
- Certain operators (`::`, `.`, `.*`, `sizeof`) cannot be overloaded.

**Advantages:**  
- Enables natural syntax for user-defined types.  
- Allows arithmetic, comparison, and assignment operations to work intuitively with objects.

---

## Algorithms / Steps

### Program 1: Constructor Overloading (Different Data Types)
**Goal:** Demonstrate multiple constructors in a class.

**Steps:**
1. Start.
2. Define a class `Construct` with three constructors:
   - One for `int` parameters.  
   - One for `string` parameters.  
   - One for `float` parameters.
3. Each constructor prints the values it receives.
4. In `main()`:
   - Create objects with integers, strings, and floats.  
   - Each object automatically calls the matching constructor.
5. End.

---

### Program 2: Constructor Overloading for Volumes
**Goal:** Compute volume using different constructors.

**Steps:**
1. Start.
2. Define class `Volume` with two constructors:
   - Constructor 1: Accepts three floats for a cuboid.  
   - Constructor 2: Accepts one float for a cube.
3. Each constructor calculates and prints the volume.
4. In `main()`:
   - Create objects with appropriate arguments.  
   - Display volume for each object.
5. End.

---

### Program 3: Function Overloading
**Goal:** Show multiple functions with the same name.

**Steps:**
1. Start.
2. Define class `Cars` with two methods:
   - `Car1(string brand, string model)`  
   - `Car2(int price)`
3. Each method displays its respective data.
4. In `main()`:
   - Create an object of `Cars`.  
   - Call both methods with relevant arguments.
5. End.

---

### Program 4: Operator Overloading (Complex Numbers)
**Goal:** Overload `+` operator for a `Complex` class.

**Steps:**
1. Start.
2. Define class `Complex` with `real` and `imag` members.
3. Create constructor to initialize these members.
4. Overload `+` operator to add two `Complex` objects.
5. Create a `print()` function to display complex numbers.
6. In `main()`:
   - Create two `Complex` objects.  
   - Add them using overloaded `+`.  
   - Print the result.
7. End.

---

### Program 5: Operator Overloading (Box Dimensions)
**Goal:** Overload `+` and `-` operators for `Box`.

**Steps:**
1. Start.
2. Define class `Box` with `length`, `width`, `height`.
3. Create constructor with default or provided values.
4. Overload `+` to sum dimensions of two boxes.
5. Overload `-` to subtract dimensions.
6. Implement `display()` to print box dimensions.
7. In `main()`:
   - Create two boxes.  
   - Perform addition and subtraction using overloaded operators.  
   - Display results.
8. End.

---

## Benefits of Overloading
- Enables **polymorphism** at compile-time.  
- Makes code **cleaner and easier to read**.  
- Reduces function naming conflicts.  
- Offers **flexible object initialization**.  
- Supports intuitive operations on user-defined types.

---

## Comparison Table

| Feature | Function Overloading | Constructor Overloading | Operator Overloading |
|---------|-------------------|-----------------------|-------------------|
| Purpose | Same function name for different parameters | Different ways to initialize objects | Redefine operator behavior for classes |
| Parameters | Must differ | Must differ | N/A |
| Return Type | Can differ, but not enough alone | Constructors have no return type | Must return compatible type |
| Use Case | Code readability | Object flexibility | Intuitive object operations |

---

## Conclusion
Overloading is a powerful **compile-time polymorphism** feature in C++. It allows the same function, constructor, or operator name to be used in multiple ways, depending on context. Mastering overloading simplifies code, improves readability, and enables more natural interactions with user-defined types, making C++ programs more robust and flexible.
