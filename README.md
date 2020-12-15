# String Generator

![Code:Could be better](https://img.shields.io/badge/Code-Could%20be%20better-red?style=flat-square)
![Status:WIP](https://img.shields.io/badge/Status-WIP-yellow?style=flat-square)

![Lang:C](https://img.shields.io/badge/Lang-C-blue?style=flat-square)

String generator that displays all possible variants of character combination taken from entered word/symbols (W.I.P.)

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

```c
gcc -o gen.txt string_gen.c
```

gen.txt can be any file you want to output all possible variations, as it will fill your whole terminal window.

**TODO**:

- Finish the code;
- Fill [README](./README.md).
