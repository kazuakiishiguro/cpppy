# c++ python sample

Use c++ code from python with very simple example

## requirement

- cmake
- python3

## build

update submodule
```bash
git submodule update --init
```

build with cmake
```bash
mkdir build
cd build 
cmake .. && make
```

## use

```bash
cp build/cpppy.xxxxxx.so .
python test.py
```
