# xHAL
xHAL interface library

Please check the project wiki before usage:
https://github.com/cms-gem-daq-project/xhal/wiki/xHAL-wiki

Developers documentation is generated with Doxygen and can be found under doc/

# Compilation Instructions

To compile xhal RPC modules execute:

```
make rpc
```

To compile CTP7 RPC libraries first compile `$BUILD_HOME/ctp7_modules` then execute:

```
make clean -f Makefile_ctp7
```

# Expert tools wiki page
https://github.com/cms-gem-daq-project/xhal/wiki/Expert-tools
