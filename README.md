## [Rolling Hash (Data Structure)](https://en.wikipedia.org/wiki/Rolling_hash)

> An efficient implementation of a rolling hash data structure in C.

A rolling hash is a data structure in which its data is stored internally as a hashed value and acts as a container for a sliding window which traverses across a stream of data. 

Utilizing efficient rehashing algorithms, the rolling hash is able to compute and rehash its data in [constant time](https://en.wikipedia.org/wiki/Time_complexity#Constant_time) as it slides through data. The old hash value is rapidly calculated by purging the old partition of the current hash value while concurrently appending on the newly hashed portion of the data. This efficient sliding window algorithm is known as the [Rabin-Karp search algorithm](https://en.wikipedia.org/wiki/Rabin%E2%80%93Karp_algorithm), which is able to find a subset of data within a mass of data (think of finding a substring within a string) with an asymptotical runtime of [`O(m(n−m+1))`](http://cs.stackexchange.com/a/10361/44333).

### Installation 

Clone the repository onto your local machine and then build the project to produce the static library.

```
$ git clone https://github.com/nickzuber/rollinghash.git
$ cd rollinghash
$ make build
```

The header file is located in [`src/rollinghash.h`](https://github.com/nickzuber/rollinghash/blob/master/src/rollinghash.h) when you're ready to include the function definitions in your files which implement the rolling hash.

When you initially build the repository, the static library will be located in [`/build/rh.a`](https://github.com/nickzuber/rollinghash/blob/master/build). Just relocate the static library to where you'd like it to be, and include the it in when you build you application and everything should be all set.

```
$ gcc -Wall -o myApplication ./file1.o ./file2.o ./path/to/lib/rh.a
```

### License

[MIT](https://opensource.org/licenses/MIT)

Copyright (c) 2016 Nick Zuber