# Adapter Pattern in C++

## Overview

This project demonstrates the **Adapter Design Pattern** in C++ using a simple example. The Adapter Pattern is a structural design pattern that allows incompatible interfaces to work together by converting one interface into another that a client expects.

## What Is the Adapter Pattern?

The Adapter Pattern acts as a bridge between two incompatible interfaces. It allows existing classes to work with a client without modifying their original implementation.

### Key Components

- **Target Interface:** Defines the interface expected by the client.
- **Adaptee:** The existing class with an incompatible interface.
- **Adapter:** Converts the Adaptee's interface into the Target Interface.
- **Client:** Uses the Target Interface to interact with the underlying implementation.

## Project Structure

```text
Adapter_Pattern/
├── main.cpp
├── README.md
└── ...
```

*Note: Update the project structure to match your actual files and folders.*

## Technologies Used

- **Language:** C++
- **Concepts:** Object-Oriented Programming (OOP), Structural Design Patterns

## How to Run

Make sure a C++ compiler such as GCC or MinGW is installed.

1. Clone the repository:

   ```bash
   git clone https://github.com/kumaraman2017/Adapter_Pattern.git
   ```

2. Navigate to the project directory:

   ```bash
   cd Adapter_Pattern
   ```

3. Compile the program (assuming the entry point is `main.cpp`):

   ```bash
   g++ main.cpp -o adapter
   ```

4. Run the executable:

   **Windows:**
   ```powershell
   .\adapter.exe
   ```

   **Linux/macOS:**
   ```bash
   ./adapter
   ```

## Learning Objectives

- Understand the Adapter Pattern and its purpose.
- Learn how to integrate incompatible interfaces.
- Apply object-oriented programming principles in C++.
- Explore practical applications of structural design patterns.

## Author

**Aman Kumar**

GitHub: [kumaraman2017](https://github.com/kumaraman2017)
