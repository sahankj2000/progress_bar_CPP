# Progress_bar_CPP
Progress bar header file for c++

## Usage :
<pre>
#include "progress.hpp"

int i=0;
while(i != 101){
    progress(i,100);  // progress() is for 0 to n
    i++;
}
progress(i,100,10) // third parameter is bar length
progress(i,100,10,4) // fourth parameter is style

// for more custom ranges
progress_range(100,-100,i) // works with both normal and reverse iteration for( i : 100 to -100)
progress_range(-100,100,i,10) // fourth parameter is bar length
progress_range(-100,100,i,10,3) // fifth parameter is style
</pre>
## Styles :
### Style 1(default):
<pre>[==========>         ]  50.00%  50/100
[====================] 100.00%  100/100</pre>

### Style 2:
<pre>{||||||||||~         }  50.00%  50/100
{||||||||||||||||||||} 100.00%  100/100</pre>

### Style 3:
<pre>|##########+         |  50.00%  50/100
|####################| 100.00%  100/100</pre>

### Style 4:
<pre>(~~~~~~~~~~-         )  50.00%  50/100
(~~~~~~~~~~~~~~~~~~~~) 100.00%  100/100</pre>

## Caution :
For some cases found buggy when std::ios_base::sync_with_stdio(false); // was false
