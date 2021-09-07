#include <stdio.h>
#include <stdlib.h>
#include "hashmap.h"
#include "stl.h"

// custom comparator to sort.
int cmp (void *i, void *j)
{
    char *t = (char *) i;
    char *x = (char *) j;
    if (*t == *x)
        return 0;
    if (*t > *x)
        return 1;
    
    return -1;
}

int main ()
{
    // general Instructions for HashStl.
    printf("\n\n            ----------- HashStl Working Instructions ---------- \n\n");
    printf("Press 'I' To Insert Key and Value into Hashmap . It Takes 2 Parameter 'Key' and 'Value'\n");
    printf("Press 'D' along with key To Delete Key in Hashmap Data structure\n");
    printf("Press 'P' To Display Hashmap Data structure\n");
    printf("Press 'V' along Key to Know value corresponding key in Hashmap Data structure\n");
    printf("Press 'S' along to key To Search Key Hashmap Data structure\n");
    printf("Press 'C' To Clear Hashmap Data structure\n");
    printf("Press 'R' To Know Max Capacity Of Hashmap Data structure\n");
    printf("Press 'X' To Know Current size Of Hashmap Data structure\n");
    printf("Press 'K' To check Hashmap Data structure empty or not\n");
    printf("Press 'O' To get count of occurrence of key int Hashmap Data structure\n");
    printf("Press 'A' To Display STL for INT Datatype\n");
    printf("Press 'W' To Display STL for CHAR Datatype\n");
    printf("Press 'E' To Exit\n\n\n");


    printf ("HashStl Execution begins \nEnter Your desire operation\n");

    while(true)
    {
        printf("---> ");
        char val;
        scanf ("\n%c", &val);

        if (val == 'E')
	    {
	        clear ();
	        printf ("\n ------ Program Exit successfully -----");
	        break;
	    }
        
        // make switch case for multiple operations.
        switch (val)
	{
            // case to insert into hashmap.
	    case 'I':
	    {
		int key, value;
		scanf ("%d %d", &key, &value);
		insert (key, &value);

	        break;
	    }
            
            // case to display content of Hash_map.
	    case 'P':
	    {
	        printf("Hash_map Contains :\n");
	        display ();
		printf("\n");
	        break;
	    }
            
            // case to display Map_Size.
            case 'X':
            {
                Map_Size();
                printf("\n");
                break;
            }
            
            // case to check Hash_map empty or not.
            case 'K':
            {
                empty();
                printf("\n");
                break;
            }
            
	    case 'V':
	    {
		int key;
		scanf("%d",&key);
		value_find(key);
		printf("\n");
		break;
	    }

            // case to display Max_Element_store of Hash_map.
            case 'R':
            {
                Max_Element_store();
                break;
            }
            
            //case to count occurrence of key in Hash_map.
            case 'O':
            {
                int key;
                scanf("%d",&key);
                int t=get_count(key);
                printf("Having count %d\n",t);
                break;
            }
            
            // case to erase key of Hash_map.
	    case 'D':
	    {
	        int key;
	        scanf ("%d", &key);
	        erase (key);
	        break;
	    }

            // case to search key of Hash_map.
	    case 'S':
	    {
	        int key;
	        scanf ("%d", &key);
	        struct Hash_map *temp = search (key, 0);
	        break;
	    }
            
            // case to clear Hash_map.
	    case 'C':
	    {
	        clear ();
	        break;
	    }
            
            // case to display STL for int Datatype.
 	    case 'A':
	    {
	         // create two Arrays of void* types of size 5.
	         void **arr = (void *) malloc (sizeof (void *) * 5);
	         void **brr = (void *) malloc (sizeof (void *) * 5);
	         //assign values to arr.
	         int x = 3;
	         int c = 9;
	         int v = 3;
	         int b = 2;
	         int n = 5;

	         // initalize values to array.
	         *(arr + 0) = &x;
	         *(arr + 1) = &c;
	         *(arr + 2) = &v;
	         *(arr + 3) = &b;
	         *(arr + 4) = &n;

	         // Data before Sorting.
	         printf ("Data before Sorting \n");
	         for (int i = 0; i < 5; i++)
	         {
		     printf ("%d ", *(int *) arr[i]);
	         }
	         printf ("\n");


	         // merge_sort array using custom comparator.
	         merge_sort (arr, 0, 4, brr, cmp);

	         // Data after Sorting.
	         printf ("Data after Sorting \n");
	         for (int i = 0; i < 5; i++)
	         {
		      printf ("%d ", *(int *) arr[i]);
	         }
	         printf ("\n");
	            
	         int val = 5;
	         printf ("Upper bound of 5 in array : ");
	         printf ("%d ", *(int *) (upper_bound (arr, 5, &val)));
	         printf ("\n");
	            
	         val = 4;
	         printf ("Lower bound of 4 in array : ");
	         printf ("%d\n", *(int *) (lower_bound (arr, 5, &val)));

	         // reverse array.
	         reverse (arr, 0, 4);
	         printf ("Data after reversing\n");
	         for (int i = 0; i < 5; i++)
	         {
		      printf ("%d ", *(int *) arr[i]);
	         }
	            
	         val = 2;
	         printf ("\nCount of 2 present in array :- %d\n",count (arr, 5, &val));
	            
	         printf ("\nFinding value 5 present in array : ");
	         int l = 5;
	         if (find (arr, 2, 5, &l))
	              printf ("YES\n");
	         else
	              printf ("NO\n");
	                
	         printf ("Transform array by + 5 :\n");
	         transform (arr, 5, &l);
	         for (int i = 0; i < 5; i++)
	         {
		      printf ("%d ", *(int *) arr[i]);
	         }
	         printf("\n\n");
	            
                 free(arr);
                 free(brr);
                    
		 break;
	        
	    }
	        
	    // case to display STL for char Datatype.
	    case 'W':
	    {
	        void** arr = (void*)malloc(sizeof(void*)*5);
                void** brr = (void*)malloc(sizeof(void*)*5);
	        
		// assign values to arr.
                char x='b';
                char c='e';
                char v='a';
                char b='o';
                char n='f';
    
                // initalize values to array.
                *(arr+0)=&x;
                *(arr+1)=&c;
                *(arr+2)=&v;
                *(arr+3)=&b;
                *(arr+4)=&n;
    
                // Data before Sorting.
                printf("Data before Sorting \n");
                for(int i=0;i<5;i++)
                {
                    printf("%c ",*(char*)arr[i]);
                }
                printf("\n");
    
    
                // merge_sort array using custom comparator.
                merge_sort(arr,0,4,brr,cmp);
    
                // Data after Sorting.
                printf("Data after Sorting \n");
                for(int i=0;i<5;i++)
                {
                    printf("%c ",*(char*)arr[i]);
                }
                printf("\n");
    
                char ch='l';
                printf("Upper bound of 'l' in array : ");
                printf("%c ",*(char *)(upper_bound(arr,5,&ch)));
                printf("\n");
    
                ch='e';
                printf("Lower bound of 'e' in array : ");
                printf("%c\n",*(char *)(lower_bound(arr,5,&ch)));
    
                // reverse array.
                reverse(arr,0,4);
                printf("Data after reversing\n");
                for(int i=0;i<5;i++)
                {
                    printf("%c ",*(char *)arr[i]);
                }
               
                ch='a';
                printf("\nCount of 'a' present in array :- %d\n",count(arr,5,&ch));
               
                printf("\nFinding value 'f' present in array : "); 
                int l=5;
                ch='f';
                if(find(arr,2,5,&ch))
                     printf("YES\n");
                else
                     printf("NO\n");
               
                printf("Transform array by + 5 :\n");
                transform(arr,5,&l);
               
                for(int i=0;i<5;i++)
                {
                   printf("%c ",*(char *)arr[i]);
                }
                printf("\n\n");
               
                free(arr);
                free(brr);
               
                break;
	       
	    }
	    
	}
    
    }
    
  return 0;
  
}
