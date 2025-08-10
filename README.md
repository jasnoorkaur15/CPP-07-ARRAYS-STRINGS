# Experiment 7: Study and Implementation of C++ Arrays and Strings

## Aim
To study the concepts of arrays and strings in C++ and implement basic operations.

---

## Objectives
- Understand declaration, initialization, and traversal of arrays and strings in C++.
- Perform common array operations:
  - Searching
  - Calculating sum and average
  - Finding maximum and minimum elements
- Learn different ways to declare and initialize strings.
- Implement string operations:
  - Concatenation
  - Reversal
  - Palindrome checking
- Enhance basic problem-solving skills using arrays and strings.

---

## Theory

### Arrays in C++
An array is a linear data structure storing multiple elements of the same type in contiguous memory.  
Elements are accessed using an index starting from 0.

#### Types of Arrays
- **One-Dimensional Array** – Stores a list of values.
```cpp
int arr[5] = {1, 2, 3, 4, 5};
````

* **Two-Dimensional Array** – Used for matrices or tabular data.

```cpp
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
```

#### Common Array Operations

* **Traversal** – Visiting each element using loops.
* **Searching** – Linear or binary search to find elements.
* **Insertion/Deletion** – Adding or removing elements (in advanced dynamic arrays).
* **Aggregation** – Calculating sum, average, max, min.

**Advantages**

* Fast access using indexes.
* Simple to declare and use.

**Limitations**

* Fixed size (static memory allocation).
* Insertion/deletion is costly.

---

### Strings in C++

A string is a sequence of characters used to represent text. In C++, they can be handled in two ways:

#### 1. C-style Strings

Stored as an array of characters ending with `'\0'` (null character).

```cpp
char name[] = "Jasnoor";
```

#### 2. C++ `std::string` Class

Introduced in the `<string>` header; provides more flexibility.

```cpp
string name = "Jasnoor";
```

---

#### Common String Functions

| Function      | Syntax                            | Description                                | Example                              |
| ------------- | --------------------------------- | ------------------------------------------ | ------------------------------------ |
| `length()`    | `str.length()`                    | Returns number of characters               | `"Hello".length()` → `5`             |
| `size()`      | `str.size()`                      | Same as `length()`                         | `"World".size()` → `5`               |
| `append()`    | `str1.append(str2)`               | Appends one string to another              | `"Hi".append("There")` → `"HiThere"` |
| `+` operator  | `str1 + str2`                     | Concatenates strings                       | `"Hi" + "There"` → `"HiThere"`       |
| `at(index)`   | `str.at(2)`                       | Returns char at index with bounds checking | `"Hello".at(1)` → `'e'`              |
| `[]` operator | `str[2]`                          | Returns char at index (no bounds checking) | `"Hello"[1]` → `'e'`                 |
| `substr()`    | `str.substr(start, len)`          | Returns substring from index `start`       | `"Hello".substr(1,3)` → `"ell"`      |
| `find()`      | `str.find("sub")`                 | Finds index of substring/character         | `"hello".find("e")` → `1`            |
| `compare()`   | `str1.compare(str2)`              | 0 if equal, >0 if str1 > str2              | `"abc".compare("abc")` → `0`         |
| `empty()`     | `str.empty()`                     | Returns `true` if string is empty          | `""` → `true`                        |
| `clear()`     | `str.clear()`                     | Clears the string                          | `"test".clear()` → `""`              |
| `c_str()`     | `str.c_str()`                     | Converts to C-style string                 | Useful for legacy functions          |
| `reverse()`   | `reverse(str.begin(), str.end())` | Reverses string (needs `<algorithm>`)      | `"abc"` → `"cba"`                    |

---

### String Operations

* **Concatenation** – Merge two strings using `+` or `.append()`.
* **Reversing** – Loop from end to start, or use `reverse()`.
* **Palindrome Check** – Compare original and reversed strings or check symmetry.
* **Character Access** – Iterate using `str[i]` or `.at()`.

---

### Arrays vs. Strings

| Feature           | C-style String (`char[]`)        | C++ String Class (`std::string`) |
| ----------------- | -------------------------------- | -------------------------------- |
| Header File       | None (`<cstring>` for functions) | `<string>`                       |
| Null-Terminated   | Yes (`'\0'`)                     | No                               |
| Declaration       | `char str[10] = "Hi";`           | `string str = "Hi";`             |
| Length            | `strlen(str)`                    | `str.length()` / `str.size()`    |
| Concatenation     | `strcat()`                       | `+` / `append()`                 |
| Comparison        | `strcmp()`                       | `==` / `compare()`               |
| Modification      | Manual loops                     | Built-in functions               |
| Bounds Checking   | ❌ No                             | ✅ Yes (`.at()`)                  |
| Memory Management | Manual                           | Automatic                        |
| Object-Oriented   | ❌ No                             | ✅ Yes                            |

---

### Importance

* **Arrays**: Store structured data like marks, sensor readings.
* **Strings**: Handle names, chat messages, file paths.
* **Foundation for**:

  * Linked Lists
  * Stacks & Queues
  * Trees
  * Algorithms (Sorting, Searching)

---

## Programs Implemented

1. **Print Array Elements** – Input and display all elements.
2. **Search in Array** – Find a specific number using loops.
3. **Sum & Average** – Calculate aggregate values of array elements.
4. **Max & Min in Array** – Identify largest and smallest values.
5. **String Declarations** – Using `char[]` and `std::string`.
6. **Concatenate Strings** – Using `+` and `.append()`.
7. **Reverse String** – Looping or using `reverse()`.
8. **Palindrome Check** – Compare original and reversed strings.

---

## Concepts Used

* Array traversal & manipulation
* String handling (C-style & C++ style)
* Loops (`for`, `while`)
* Conditional statements (`if-else`)
* `<string>` functions

---

## Sample Outputs

### 1. Print Array

```
47    160    89    3782    715
```

### 2. Search in Array

```
Enter element-1: 72
Enter element-2: 900
Enter element-3: 71891
Enter element-4: 730
Enter element-5: 8
Enter element to be searched: 900
Position of 900: 2
```

### 3. Largest & Smallest

```
Enter the elements:
1 2 3 7
Maximum = 7
Minimum = 1
```

### 4. Sum & Average

```
Enter number of elements: 4
Enter the elements:
1 3 4 5
Sum = 13
Average = 3.25

```

### 5. Display String

```
Enter string: hello
Given string: hello
```

### 6. Concatenate Strings

```

```

### 8. Reverse String

```
Enter string: Hello
```

### 9. Palindrome Check

```
Enter a string: madam
madam is palindrome
```


