
Instructions for runnng the example
------------------------------------


1) Create a new directory and change into it

```
mkdir  fl_example
cd fl_example
```

2) Copy the .tar file in there and unpack it

```
cp <download-dir/fl_example.tgz .
tar -xzvf fl_example.tgz
```

3) Build it

```
touch .depend
make
```

4) If it built correctly, try the test

```
make test
./ptucc < sample001.fl > sample001.c
gcc -Wall -std=c11 -o sample001 sample001.c
./sample001
Hello world
```

5) Test Everything 
```
make testall
```
