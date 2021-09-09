## Implementation of HashMap Data Structure and STL Functions For C Users .
___
#### Description :
What is Hashmap ? 
<br>
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. All mapped Key must be unique.It help in performing insert , delete and search operation in constant time on average.
<br>
<br>
What is upper bound and lower bound in STL ?
<br>
Lower_bound returns an index pointing to the first element in the range [first,last) which has a value not less than ‘val’. <br>
Upper_bound returns an index pointing to the first element in the range [first,last) which has a value greater than ‘val’. <br><br>
What is count and find in STL ? <br>
Count returns number of occurrences of an element in a given range. <br>
Finds the element in the given range of numbers.<br><br>

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2015/08/openAddressing1.png)<br>Pic credit : GFG <br><br>
Applications of Hashmap is as follows :
-	Priority Queues
-	Dijkstra's Algorithm
-	Topological Sort
-	Database indexing
-	Routers
<br>

### Why Hashmap over others Data structures ?
#### <i>After Arrays ,it is second most used data structure and using this data structure we solve numerous of real life problems.</i>
___

## Project Goals :
-	The main goal was to implement a Library that has key functions like :
     -	Hashmap Implementation.
     -	Insert a Key.
     -	Searching a Key.
     -	Deleting a Key , if needed.
     -	Clear Hashmap.
     -	Finding value corresponding to key.
     -	Size of Hashmap.
     -	Upper bound and Lower bound.
     -	Inbuilt Sort and Reverse.
     -    Count and Find.
-	Making it as a header files for user , as there is no inbuilt header files for Hashmap data structure and STL Function For the  C - Users.
-	Performing operation in standard time constraint and space constraint using linear probing.
___

### Design and Specifications :
Created 4 files , First file "<b>hashmap.h</b>"  contains Hashmap function declaration , Second file "<b>hashmap.c</b>" contain implementation of hashmap and its function , Third file "<b>stl.h</b>" contains stl function declaration , Fourth file "<b>stl.c</b>"  contain implementation of stl functions .<br>
To include hashmap.h and stl.h in Main.c use #include “<b>hashmap.h</b>” ,    #include "<b>stl.h</b>" .<br>
On executing Main.c , the user get following choices :- 
-	Insert Key with value.
-	Delete a Key.
-	Print Hashmap.
-	Find value corresponding to key.
-	Search key.
-	Clear Hashmap.
-	Max capacity of Hashmap.
-	Size of Hashmap.
-	Check Hashmap empty or not.
-	Count occurrence of key.
-	Display STL for Integers.
-	Display STL for Characters.
-	Exit.
<br>
<i>When user chooses Exit option , the program terminates.</i><br>
<b>About hashmap.h file and its working</b>.<br>
<b>"hashmap.h"</b> contain Hashmap data structure implementation and various hashmap functions .  These functions includes insert key value pairs , delete key , update value , search key , check hashmap empty or not  , etc. <br>
<b>About stl.h file and its working</b>.<br>
<b>"stl.h"</b> contain implementation of various stl functions .  These functions includes upper bound , lower bound , reverse , swap , sort , transform , count and find . <br><br>


| Function name | Description | Time complexity (worst case) | Time complexity (average case) |
| :---: | :---: | :---: | :---: |
| insert(key , value)	| The function helps in insert Key and value pair into Hashmap | O(N) | O(1) |
| delete(key) | The function helps in delete key value pair if present in Hashmap | O(N) | O(1) |
| display() |	The function helps in printing hashmap | O(N) | O(N) |
| Clear()	| The function helps in delete all key value pair present in Hashmap	| O(N) | O(N) |
| value_find(key) | The function helps in accessing value corresponding to key | O(N) | O(1) |
| search(key) | The function helps in finding key in Hashmap | O(N) | O(1) |
| Max_element_store() | The function helps in finding maximum capacity of Hashmap | O(1) | O(1) |
| Map_Size() | The function helps in finding size of Hashmap | O(1) | O(1) |
| empty() | The function helps in checking Hashmap empty or not | O(1) | O(1) |
| get_count(key) | The function helps int finding occurrence of key in Hashmap | O(N) | O(1) |
| Upper_bound(value) |	The function provide upper bound on given value.	| O(logN) | O(logN) |
| Lower_bound (value) |	The function provide lower bound on given value.	| O(logN) | O(logN) | 
| Sort() |	 The function help in sorting data . | O(NlogN) | O(NlogN) |
| Find(value)	| The function check whether element present or not.	| O(N) | O(N) |
| Count(value) | The function return count of occurrence of value.	| O(N) | O(N) |
| Reverse()	| The function helps in reversing data.	| O(N) | O(N) |
| Transform(value)	| The function helps in transforming data by given value.	| O(N) | O(N) |
