# 🔁 C++ Module 06 – Type Casting & Runtime Identification

This module introduces **C++ casting operators**, **serialization**, and **runtime type identification**. It focuses on converting between data types, safely storing raw pointers, and identifying derived types using base class references or pointers—all without `typeid`.

---

## 📁 Exercises Overview

### 🧪 ex00 – ScalarConverter

- Create a static class `ScalarConverter` with one method:
  ```cpp
  static void convert(std::string const & literal);
  ```
- Detect and convert input to:
  - `char`, `int`, `float`, `double`
- Handle special literals: `nan`, `+inf`, `-inf`, etc.
- Display conversion results and detect impossible cases.

---

### 🗂️ ex01 – Serializer

- Implement a non-instantiable class `Serializer`:
  ```cpp
  static uintptr_t serialize(Data* ptr);
  static Data* deserialize(uintptr_t raw);
  ```
- Serialize a pointer into a `uintptr_t`, then convert it back.
- Ensure round-trip serialization returns the original pointer.
- Include a simple `Data` struct with fields.

---

### 🧬 ex02 – Identify Real Type

- Create:
  - A base class `Base`
  - Derived classes `A`, `B`, and `C`
- Implement:
  ```cpp
  Base* generate();
  void identify(Base* p);
  void identify(Base& p);
  ```
- Randomly instantiate and identify the real type of the object.
- Must not use `typeid`.

---

## 🛠️ Build Instructions

```bash
make
```

Each exercise is inside its own folder: `ex00/`, `ex01/`, `ex02/`

---
