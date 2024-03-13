HowTo Build:

You need to build SDL:
- ooPo's ps3toolchain : https://github.com/ps3dev/ps3toolchain
- the PSL1GHT SDK : https://github.com/ps3dev/PSL1GHT.git
- possibly ooPo's ps3libraries : https://github.com/ps3dev/ps3libraries

Run the script.sh to configure SDL2

Run make & make install afterthat

or

```sh
make -f Makefile.psl1ght && make -f Makefile.psl1ght install
```
To built up your source use the -lSDL2 -lm switches
