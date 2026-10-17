# Single-file BST scaffold

This version follows the screenshot: TreeNode, Tree and main() are all in main.cpp. No separate header or implementation file is needed. Function declarations and TODOs are supplied; no function implementations are supplied.

## Start

Open this folder in VS Code. Write each function body directly inside its class by replacing the declaration's semicolon with your body. Do not leave the declaration and add a second definition of the same function inside the class.

The untouched file builds an empty program. Once main calls a function, that function and any dependencies need definitions; otherwise the linker reports an undefined reference.

Use Ctrl+Shift+B to build with the provided task, which expects g++ on PATH. Run ./bst_practice on Linux/macOS or .\bst_practice.exe in Windows PowerShell.

## Match the lab

- Names: TreeNode, Tree, value, left, right, root, subtree.
- Recursive helper parameter order: value first, subtree second.
- Helpers and wrappers are together in the Tree class, as in the lecture.
- Duplicates go right when an equal key is encountered.
- Min/max helpers assume a nonempty subtree; decide how your wrappers handle an empty tree.
- Implement node destruction using the lab's child-subtree ownership model. Remember that single-node removal must preserve any surviving child.
- Do not copy an owning Tree object; deep-copy behaviour is outside this exercise.
- Extra height/size functions are optional. Use height -1 for empty, 0 for a leaf.

Suggested order: constructors/destructors, insertion, contains, min/max, depth-first traversals, level order, removal, optional functions.

Reference input: 50 30 35 61 24 58 62 32. Derive expected outputs yourself or compare with your tutoring notes.
