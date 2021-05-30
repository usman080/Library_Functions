# Clock 

## 

### Usage : 

```
#include "stopwatch.hpp"

Stopwatch x;
x.start();
// ... do computations for 15.34 sec
x.stop(); // only pauses stopwatch
x.print( "Time needed " ); // > Time needed 15.34 sec.
x.start(); // resumes stopwatch
// ... next computations for 11.22 sec
x.stop();
x.print( "Time needed " ); // > Time needed 26,56 sec.
x.reset(); // reset to default values
x.start(); // starts the stopwatch from 0
// ... computation 5.7 sec
x.print( "Time " ); // > Time 5.7 sec.
// ^ intermediate timing without stopping the stopwatch
// ... more computations 1.7643 min
x.stop();
x.print("Time needed ", Stopwatch::MINUTES, std::cerr);
// > Time needed 1,8593 min. (on cerr)
// other units and output streams possible
```

#### Thanks to https://github.com/tammoippen for Creating such a Amazing Code.