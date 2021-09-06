# Very bad programming language (Unnamed)

## Rational

Lets say you are stuck with a computer, and a keyboard, on an island, and to save your life you MUST write a program that does... something. However, to your surprise the keyboard is actually a typewriter from the 1900s, which can only write the following characters:

- A~Z
- a~z
- 0~9 (*not required using package `numless`*)

worry do not! for *very bad programming language* is to your rescue!

## Usage

As you can see, this "language" is actually just a bunch of C Macros, and as such all of the logic in this language is equivalent to that of C's. There are, however, a few "additions" in order to make alphanumeric programming possible.

As a reference, all language commands begin with a Capital Letter, for example: `Do`, `While`, `Arguments`, `Endarguments`, etc.

## Running

Included are two scripts: `compile.bat` (for Windows) and `compile.sh` (for *nix machines). On your machine, one of the following compilers **must** be present:

- `gcc`
- `clang`

instructions on how to download these compilers are available on the internet (on *nix machines one of the two usually comes preinstalled anyway).

Following our "typewriter" keyboard, to compile such program, use:

```shell
$ compile.sh [Filename] [Any additional arguments]
```

notice how you don't need to write the file extension :-). In the `[Any additional arguments]` sections, simply write any additional arguments to the compiler (for example: `$ compile.sh myfile Ofast v` which translates to: `$ gcc myfile.c -Ofast -v`).

## Compiling Manually

If you are still reading this, then thanks I guess? To compile manually, enter the following commands:

```shell
$ gcc -E [file] > "[temp file]"
$ gcc [temp file] -o [output name]
optionally:
$ rm [temp file] # remove the temp file
```

essentially, the first command "precompiles" (?) the file (it actually runs the preprocessor), because for some odd reason `gcc` doesn't like compiling the source code (shocker!), which outputs the code expanded without macros, and then the second command just compiles the code normally.
