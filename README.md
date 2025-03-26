Forked from https://github.com/persiancal/jcal

jcal
====
<a href="https://repology.org/project/jcal/versions">
    <img src="https://repology.org/badge/vertical-allrepos/jcal.svg" alt="Packaging status" align="right">
</a>
Jalali calendar is a small and portable free software library to manipulate date and time in Jalali calendar system.
It's written in C and has absolutely zero dependencies. It works on top of any POSIX.1-2001 (and later) compatible
libc implementations. Jalali calendar provides an API similar to that of libc's timezone, date and time functions.

Jalali calendar package consists of a library namely libjalali and two simple and easy to use terminal tools, jcal
and jdate with functionality similar to UNIX cal and date.

Compiling from git
==================
This project uses the gnu autoconf build system. see `info autoconf` for in depth documentation.

In summary:
* Run `autoreconf -iv` in the `sources` directory of the cloned git repository to generate the `configure` script and other files
* Run `./configure` to generate `Makefile`s and other files.
* Run `make` to compile
* Run `make check` to run tests

The released source tarballs contain the `configure` script so you can skip generating it.

To clean all the autoconf generated files: `git clean -idX`


---

This library was written and maintained by Ashkan Ghasemi, he passed away in an [accident](https://jadi.net/2017/10/ashkan-ghasemi/).
Therefore there is no way to migrate the original repository to another person, so this fork is for keep the project alive.
