# Medical Substitution Cipher

A substitution encryption algorithm developed in C. The program receives a 26-character key and encrypts messages while preserving formatting (uppercase/lowercase) and ignoring non-alphabetic characters.

---

## Features

- **Key Validation:** Ensures the key has 26 unique alphabetic characters.
- **Case Preservation:** Maintains the original letter case (uppercase/lowercase).
- **Ignores Symbols:** Numbers, spaces, and punctuation are preserved in the output.

---

## How to Use
```bash
//1. Compile the program
make criptografia

// 2. Run it by providing the 26-letter substitution key. Example:
./criptografia JTREKYAVOGDXWPSNCUIZLFBMHQ

// 3. Enter the text to be encrypted when prompted.

About the author
Medical and Computer Science student. Project developed as part of the OSSU curriculum.
