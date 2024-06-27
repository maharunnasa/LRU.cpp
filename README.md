# Least Recently Used (LRU) Page Replacement Algorithm

This is a C program that implements the Least Recently Used (LRU) page replacement algorithm. It calculates the number of page faults that occur when a sequence of page references is processed using a fixed-size frame.

## Table of Contents

- [Overview](#overview)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)
- [Contributing](#contributing)
- [License](#license)

## Overview

This program simulates the LRU page replacement algorithm. It asks for the number of pages in the reference string, the size of the frame, and the elements of the reference string. It then processes the reference string and outputs the contents of the frame after each reference and the total number of page faults.

## Requirements

- A C compiler (e.g., gcc)
- Standard C library

## Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/yourusername/lru-page-replacement.git
   cd lru-page-replacement
###Code Explanation
The code is structured as follows:

Variable Declarations:

Arrays a and b to store the reference string and frame contents, respectively.
Variables n and m to store the number of reference strings and the size of the frame.
Variable c to count the number of page faults.
Main Function:

Prompts the user to input the number of reference strings, frame size, and elements of the reference string.
Initializes the frame with -1 to indicate empty slots.
Processes each element of the reference string:
Checks if the element is already in the frame.
If not, finds an empty slot or replaces the least recently used page.
Updates the frame and increments the page fault count if necessary.
Outputs the frame contents after each reference and the total number of page faults.

Example Output
   ```bash
enter no. of reference string: 12
enter size of frame: 3
enter the elements of ref. string: 
7 0 1 2 0 3 0 4 2 3 0 3

 7 -1 -1
 7 0 -1
 7 0 1
 2 0 1
 2 0 1
 2 3 1
 2 3 0
 4 3 0
 4 2 0
 4 2 3
 0 2 3
 0 2 3

No of page fault is:8

