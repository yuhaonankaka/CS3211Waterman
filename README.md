CS3211Waterman
=================

TODO list:

[TOC]

# 1. Document

## 1.1. main program usage

## 1.2. test usage

## 1.3. basic algorithm

 <!-- - what have you done in parallel? -->

## 1.4. parallel algorithm 1 

## 1.5. parallel algorithm 2

## 1.6. Any optimizations you have made. What sort of data structures have you used?

## 1.7. Any limits on the behavior of the problem (data set size).


## 1.8. Description of the experiments and testing you did.

• Timing for smaller and larger data sets.

• Graphs comparing the runtimes of your algorithm running in a single thread versus running with
multiple threads, on different sized problems.

## 1.9. Result

For this algorithm is used to compare two alike strings, we only tested strings with similar length.

data set|description|thread 1|parallel 1|parallel 2|pure c++ 1 thread|cpp omp  
-|-|-|-|-|-|-
-|short-short-alike match|-|-|-|-|-
-|short-short-not-alike match|-|-|-|-|-
-|mid-mid-alike match|-|-|-|-|-
-|mid-mid-not-alike match|-|-|-|-|-
-|long-long-alike match|-|-|-|-|-
-|long-long-not-alike match|-|-|-|-|-

length1:length2:match_rate 

## 1.10. Analyze

• Comparison of your results with a specific analysis model that you propose, based on the hardware,
the algorithm and so on.

---

# 2. Test script

## 2.1. Randomly generate string

```py
from random import randint
print(randint(0, 9))

def rand_alpha():
    case = randint(0, 3)
    if(case==0):
        return 'A'
    if(case==1):
        return 'C'
    if(case==2):
        return 'T'
    if(case==3):
        return 'G'


def rand_str(length):
    str=''
    for i in range(length):
        str=str+rand_alpha()
    return str

def make_input_file(string, name):
    output=
        r''' '''
    with open(name, 'w') as f:
        f.write(output)
```

## 2.2. Define test case:

```py

def test_case(len1, len2):
    # call ......
    timing_result={}

    return timing_result
```

## 2.3. Run and record test result:

```py

length1 = range(10, 100, 1000)
length2 = range(10, 100, 1000)

length1.append(2000)
length2.append(2000)

for a in length1:
    for b in length2:
        test_case(a,b)

```


## 2.4. To json and print.

## 2.5. Make plot


```py
import numpy as np
import matplotlib.pyplot as plt
 
x=[0,1]
y=[0,1]
 
plt.figure()
plt.plot(x,y)
plt.xlabel("time(s)")
plt.ylabel("value(m)")
plt.title("A simple plot")
```

TODO: Try to run on cluster.