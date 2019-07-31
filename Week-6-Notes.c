//                                  07/30/19
// Yesterday we started looking at hash tables.
// How do you deal with same idx numbers causing "collisons"

//There are two ways to deal with hashing collisons.
/*
Chaining(Buckets) [Discussed on 07/31/19]
  Create an array in each index slot, so the index can hold multiple values.

Open Address Hashing
  When adding a value, check the index to see if it's full. If it is, add the
  value to the next empty index.
  Add, Contains, Remove functions
  Load Factor
*/

//Open address function example
/*
Hash function checks 3rd letter of name, and assigns containter.
[Slots] : [Contents] : [name]
  0 : a,i,q,y   : Amina
  1 : b,j,r,z
  2 : c,k,s
  3 : d,l,t     : Andy
  4 : e,m,u     : Alessia
  5 : f,n,v     : Alfred
  6 : g,o,w              //Aimee
  7 : h,p,x     : Aspen


  If you wanted to add AiMee, then you would move until an open index was
  found. This would put the name in container 6.

  When the contains function starts looking for Aimee, it starts at 4, then looks
  until it finds it. O(n)!

  When you go to remove a value, you find the value, then empty the container by
  setting it to NULL.
  Aimee EX) Go to 4, probe to Aimee, then remove from table.
  Well, what if you hit NULL before finding a value you're looking for?
    1) Do not remove value. (meh)
    2) Special character indicating empty. "tombstone"


  The statistic of the hash table is the LOAD FACTOR. It tells us how much of
  the table is filled.

  lambda = h/m = [number of elements]/[table size]

  The lower the load factor is, the better the serach function time.
    sucessful searches               unsucessful searches
    s = 1/2(1+1/(1-3))             u = 1/2(1 + 1/(1 - lambda)^2)
    =>
    lambda                  s                          u
    0.5                    1.5                        2.5
    0.75                   2.5                        8.5
    0.9                    5.5                        50.5
    This graph had an exponential curve. Meaning as utilization goes up in the
    hash table, we see a decrease in performance.

    Some spots are more likley to be filled than others as utilization goes up.
    This is due to the way we've constructed the hash function.


  ////// HOW DOES THE HASH FUNCTION RELATE TO THE MBR TABLE PARTITION SCHEME?///
  //////// THIS HASH FUNCTION IS REALLY COMPLEX, STUDY IT'S CONSTRUCTION.//////
*/


////////////////////////////////////////////////////////////////////////////////
/*
                          Buckets(Chaining)
    In the Open Address Hashing(O.A.H.) we have an array of individual slots
      that graudually get filled. The load order is closest to desired slot, if
      desired slot is filled.

    We will be implementing Counting sort and Radix sort to implement this hashing
      table.


    The 1st level of the Hash table array is the buckets.
    The chains are the arrays tied to each slot of the array.

    The sort uses bucket "size" and remainder to decide location of the data.
    You could back load or front loat the data. However front loading is O(1)
      and more efficent.
*/

struct HashTable{
    struct LinkedList** table;
    int capacity;
    int count
}

void initHashTable(struct HashTable* ht, int size){
    int i;
    ht->capacity = size;
    ht->count = 0;
    ht->table = malloc(ht->capacity * sizeof(struct LinkedList));
    assert(ht->table != 0);
    for(i = 0; i < ht->capacity; i++){
        ht->tabe[i] = newList();  //Add a new list pointer to the linked list #include
                                  //   in each bucket.
    }
}

void addHashTable(struct HashTable* ht, TYPE val){
    int idx = hash(val) % ht->capacity;
    if(inx < 0){
      idx += ht->capacity;
    }
    addList(ht->table[idx], val);
    ht->count++;
    /*Recognize if the load factor is too large*/
    //Review the lambda calculation and load factor.   <===== IMPORTANT
}



/*
            Counting sort

    What kind of sort is the counting sort?

    When is it used?
      When you want to count things...

      1) Go through and hash int array.
      2) Count number of times each number occurs.
      3) rewrite the array with data from the hash in order.
*/

void countSort(int data[], int m, int max){
                           // n - size of data | m - max value in data[]
     int i,j,k;
     int* cnt = malloc((max + 1) * sizeof(int));
     for(i = 0; i < m; i++){   //O(n)
        cnt[data[i]]++;
     }
     i = 0;
     //This double for loop is complex and I don't really get it.
     for(j = 0; j <= max; j++){ //O(max value)
        for(k = cnt[j]; k > 0){ //O(size of data[])
                                             // =>  O(max * size) -> O(n^2)
           //This works if you have a lot of small values, in a large array.
           data[i++] = j;
        }
     }
}
