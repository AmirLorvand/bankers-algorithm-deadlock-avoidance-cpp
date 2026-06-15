# Banker’s Algorithm Deadlock Avoidance – C++

This project is a C++ implementation of **Banker’s Algorithm**, a classic operating systems algorithm used for **deadlock avoidance**.

The program checks whether a system is in a safe state based on the available resources, maximum resource requirements, allocated resources, and calculated resource needs for each process.

---

## Project Timeline

* **Originally completed:** 2024
* **Refactored and published on GitHub:** 2026
* **Context:** Operating Systems coursework project

This repository has been cleaned and documented for portfolio purposes.

---

## Features

* Implements Banker’s Algorithm in C++
* Calculates the remaining resource need for each process
* Checks whether the system is in a safe or unsafe state
* Uses vectors to represent available resources, maximum demand, allocated resources, and need matrices
* Demonstrates basic operating system deadlock avoidance logic

---

## Technologies Used

* C++
* Operating Systems concepts
* Banker’s Algorithm
* Resource allocation matrices
* Makefile

---

## Project Structure

```text
.
├── Bankers.cpp
├── Bankers.h
├── main.cpp
├── Makefile
├── .gitignore
└── README.md
```

---

## How the Algorithm Works

The program uses the following matrices/vectors:

* **Available:** currently available resources
* **Max:** maximum resources each process may need
* **Allocated:** resources already allocated to each process
* **Need:** remaining resources required by each process

The `Need` matrix is calculated as:

```text
Need = Max - Allocated
```

The algorithm then checks whether there is a safe sequence of process execution. If each process can eventually complete and release its resources, the system is considered safe. Otherwise, the system is unsafe and the request should be denied.

---

## How to Compile

Use the Makefile:

```bash
make
```

This creates an executable called:

```bash
bankers
```

---

## How to Run

```bash
make run
```

Or run the executable directly:

```bash
./bankers
```

---

## Example Output

Depending on the resource configuration, the program prints either:

```text
System is in the safe mode, grant the request.
```

or:

```text
System is not in the safe mode, deny the request.
```

---

## Core Functions

### `calculateNeed`

Calculates the remaining resources required by each process:

```cpp
need[i][j] = maxR[i][j] - allocated[i][j];
```

### `isSafe`

Checks whether the system is in a safe state by repeatedly looking for a process whose remaining needs can be satisfied by the currently available resources.

---

## What I Learned

Through this coursework project, I practised:

* Implementing an operating systems algorithm in C++
* Working with vectors and matrices
* Understanding deadlock avoidance
* Modelling resource allocation between processes
* Structuring C++ code using header and implementation files
* Preparing a small systems programming project for GitHub

---

## Future Improvements

Possible improvements include:

* Allowing users to enter custom process/resource values
* Printing the safe sequence when the system is safe
* Adding request-handling functionality for new resource requests
* Adding input validation
* Adding unit tests
* Refactoring the project into `src` and `include` folders

---

## Author

**Amir Lorvand**

Computer Science graduate with an interest in software development, artificial intelligence, machine learning, and systems programming.
