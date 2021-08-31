## Library For HashMap Data Structure and STL Functions - HashStl.h.
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

![alt text](https://miro.medium.com/max/637/1*w1mRVHC1hNc2ywDoYibkiA.jpeg)<br><br>
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
     -	Upper bound and Lower bound.
     -	Inbuilt Sort and Reverse.
     -  Count and Find.
-	Making it as a library for user , as there is no inbuilt library for Hashmap data structure and STL Function For the  C - programming languages.
-	Performing operation in standard time constraint and space constraint.
___

### Design and Specifications :
Created 2 files , one is Hashstl.h file which contains Hashmap data structure and stl functions implementation , and the other is Main.c file which contains the main function to use Hashstl.h file.<br>
To include Hashstl.h in Main.c use #include “Hashstl.h”. <br>
On executing Main.c , the user get following choices :- 
-	Insert Key with value.
-	Edit Value of Key.
-	Delete a Key.
-	Clear Hashmap.
-	Print Key value pair.
-	Count and find.
-	Sort and Reverse.
-	Upper bound and lower bound.
-	Exit.
<br>
<i>When user chooses Exit option , the program terminates.</i><br>
<b>About Hashstl.h file and its working</b>.<br>
Hashstl.h contain Hashmap data structure implementation and others stl functions .  These functions includes Hashmap implementation , insert key value pairs , delete key , update value , lower bound and upper bound , sort , count and find , reverse.<br><br>


| Function name | Description | Return type |
| :---: | :---: | :---: |
| Hashmap_initalize()	| The function helps in allocate memory to Hashmap data structure.	| Void |
| Insert(key , value)	| The function helps in insert Key and value pair into Hashmap. |	Void |
| Present(key) |	The function check whether Key is present or not in Hashmap. |	Boolean |
| Update (key,value) |	The function helps in updating value of key if present , if not present it insert key value pair into Hashmap.	| Void |
| Delete(key)	| The function helps in delete key value pair if present in Hashmap.	| Void |
| Clear()	| The function helps in delete all key value pair present in Hashmap.	| Void |
| Create(size) |	The function helps in allocating memory to dynamic array.	| Void |
| Upper_bound(val) |	The function provide upper bound on given value.	| Int |
| Lower_bound (val) |	The function provide lower bound on given value.	| Int | 
| Sort() |	The function help in sorting data and parameter is optional to sort reverse order.	| Void |
| Find(val)	| The function check whether element present or not.	| Boolean |
| Count(val) | The function return count of occurrence of val.	| Int |
| Reverse()	| The function helps in reversing data.	| Void |
| Print()	| The function helps in printing data.	| Void |
