# 🎮 Hangman Game in C

A fun and interactive **console-based Hangman Game** written in **C language**.  
Players try to guess a hidden word from random categories before running out of tries.  
The project is simple, educational, and perfect for beginners learning programming logic in C. 💻  

---

## 🧩 Features
- 🐾 Random words from multiple categories:
  - Animals  
  - Cars  
  - Fruits  
  - Body Parts  
  - Colours  
- ⚙️ Three difficulty levels: **Easy / Medium / Hard**  
- 🔠 Letter-by-letter guessing system  
- 💀 Limited tries — lose if you run out!  
- ✅ Fun feedback messages for correct and wrong guesses  
- 💡 Beginner-friendly C code with clean structure  

---

## 🧠 Concepts Used
This project helps you understand:
- Arrays and strings  
- Loops and conditional statements  
- Random number generation using `rand()` and `srand()`  
- Character handling with `ctype.h` (`tolower()`)  
- Modular code structure with arrays of pointers  

---

## ⚙️ How the Program Runs

The **Hangman Game** runs directly in the **terminal or command prompt** after compiling.  
Follow these steps to execute and play the game 👇  

---

### 🖥️ Compile and Run
```bash
# Step 1: Navigate to the folder containing your source file
cd "C:\Users\itsun\OneDrive\Documents\New folder (2)"

# Step 2: Compile the program using GCC
gcc hangman.c -o hangman

# Step 3: Run the executable file
./hangman        # (For Linux/Mac)
hangman.exe      # (For Windows)
```


### 🎮 Program Execution

Once you run the program, you’ll see a **menu for difficulty selection**.  
Use your keyboard to enter your choice (`1`, `2`, or `3`).

```bash
=== Select Difficulty Level ===
1. Easy   (1–4 letters)
2. Medium (5–8 letters)
3. Hard   (9+ letters)
Enter choice: 2
```

### 🧩 Example Gameplay Output

After selecting a difficulty, the game randomly picks a word from one of five categories:  
**Animals**, **Cars**, **Fruits**, **Body Parts**, or **Colours**.

You then guess letters until you either complete the word or run out of tries.
make sure type character  by character  it does't work word by word.

```bash
Guess which Fruits is this?

Word: _ _ _ _ _
Tries left: 6
Guess a letter: a
✅ Good guess!

Word: a _ _ a _
Tries left: 6
Guess a letter: p
✅ Good guess!
```

🎉 Congratulations! You guessed it right: apple

 
