# Bushi

A lightly modified version of [ninja](https://github.com/ninja-build/ninja).

Changes:
- CMakeLists.txt change to create a libninja library (not just object files) to make including ninja
  in other tools easier.

## Approach

All changes to this repo are made lightly, respecting the ninja upstream repo. This means commits
are never made against the master branch, so bushi always "sits on top of ninja" and its
modifications can be easily migrated to sit on different ninja versions (and maybe someday, find
their way into the upstream ninja project). Bushi commits are made on branches named `bushi-x.y.z`
based off of a ninja `vx.y.z` tag. Bushi tags are of the form `x.y.z-bushi` which also correspond to
a ninja `vx.y.z` tag.

Below is the original ninja readme, intact and unmodified.
# Ninja

Ninja is a small build system with a focus on speed.
https://ninja-build.org/

See [the manual](https://ninja-build.org/manual.html) or
`doc/manual.asciidoc` included in the distribution for background
and more details.

Binaries for Linux, Mac, and Windows are available at
  [GitHub](https://github.com/ninja-build/ninja/releases).
Run `./ninja -h` for Ninja help.

Installation is not necessary because the only required file is the
resulting ninja binary. However, to enable features like Bash
completion and Emacs and Vim editing modes, some files in misc/ must be
copied to appropriate locations.

If you're interested in making changes to Ninja, read
[CONTRIBUTING.md](CONTRIBUTING.md) first.

## Building Ninja itself

You can either build Ninja via the custom generator script written in Python or
via CMake. For more details see
[the wiki](https://github.com/ninja-build/ninja/wiki).

### Python

```
./configure.py --bootstrap
```

This will generate the `ninja` binary and a `build.ninja` file you can now use
to build Ninja with itself.

### CMake

```
cmake -Bbuild-cmake
cmake --build build-cmake
```

The `ninja` binary will now be inside the `build-cmake` directory (you can
choose any other name you like).

To run the unit tests:

```
./build-cmake/ninja_test
```
