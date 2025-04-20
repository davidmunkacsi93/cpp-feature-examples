# C++ mit/ohne – Modern Feature Comparisons

A structured collection of C++ feature comparisons that demonstrate how modern language constructs improve code clarity, safety, and conciseness.  
Each example shows how a feature is used **with** modern C++ and **without** (using older or manual approaches), helping developers understand the practical value of modern syntax.

This repository is especially useful for developers:

- upgrading legacy codebases,
- learning idiomatic modern C++,
- or preparing training materials and presentations.

## 📁 Structure

Top-level folders represent **C++ standard versions**:

- cpp11/
- cpp14/
- cpp17/
- cpp20/
- cpp23/

Each version folder contains **feature folders**, such as:

- auto/
- smart_pointers/
- lambda/

Each feature folder includes:

- `with.cpp` – modern usage of the feature
- `without.cpp` – legacy or manual alternative
- `README.md` _(optional)_ – brief explanation in German

## 🚀 Running the Examples

To compile and run an example, navigate to the specific feature folder and use the following commands:

1. Compile the "with" example:
   ```bash
   g++ -std=c++XX with.cpp -o with
   ./with
   ```
