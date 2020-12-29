# String Generator

![Code:OK](https://img.shields.io/badge/Code-OK-yellow?style=flat-square)
![Status:🛠Improving](https://img.shields.io/badge/Status-🛠Improving-blue?style=flat-square)

![Lang:C](https://img.shields.io/badge/Lang-C-blue?style=flat-square)

---

## Special thanks

- [KrowK1ng](https://github.com/KrowK1ng) - generator part

---

String generator that displays all possible variants of character combination taken from entered word/symbols.

**Example**:

User enters "ab" and then lenght of maximum string combination. The program will take all the characters from the string and will generate all string combinations in ascending order.

```txt
User input: ab
Maximum lenght: 2
a
b
aa
ab
ba
bb
```

## How to run

```txt
gcc string_gen.c
```

then

```txt
compiled file > out.txt
```

gen.txt can be any file you want to store output.

---

**TODO**:

- [x] Finish the code;
- [ ] Fill [README](./README.md);
- [x] Add space detection;
- [ ] Manage own headers;
- [ ] Port in another languages.

---

## **⚠ Warning ⚠**

Depending on number of characters entered and maximum string length, your wordlist may occupy large amount of disk space.
