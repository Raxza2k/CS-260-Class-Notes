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
  until it finds it. 
*/