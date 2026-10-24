# 🎲 Random Number Generator

A simple **C++ number guessing game** where the computer generates a random number between 1 and 10, and the user tries to guess it.

## 🚀 Features

- Generates a random number between 1 and 10.
- Takes user input through the console.
- Tells the user to try again when the guess is incorrect.
- Displays a success message when the correct number is guessed.
- Uses a `while` loop to repeat the guessing process.

## 🛠️ Technologies Used

- **C++**
- Standard C++ libraries: `iostream`, `cstdlib`, and `ctime`

## 📋 How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/lxka806/Random-Num-Generator-.git
   ```

2. Navigate to the project directory:

   ```bash
   cd Random-Num-Generator-
   ```

3. Compile the program:

   ```bash
   g++ main.cpp -o random
   ```

4. Run the program:

   **Windows:**
   ```bash
   .\random.exe
   ```

   **Linux / macOS:**
   ```bash
   ./random
   ```

## 💻 Example Output

```text
Enter a number between 1 and 10: 5
Try again!

Enter a number between 1 and 10: 8
Good job! It was 8
```

*The output above is an example. The random number changes between program runs.*

## 📚 What I Learned

- Generating pseudo-random numbers in C++ using `rand()` and `srand()`.
- Using `time(NULL)` to seed the random number generator.
- Working with `while` loops and `if-else` statements.
- Handling user input with `std::cin`.
- Using conditional logic to build a simple interactive game.

## 👨‍💻 Author

**Luka Ivanishvili**

- GitHub: [@lxka806](https://github.com/lxka806)

---

*Built as a beginner C++ project to practice programming fundamentals.*
