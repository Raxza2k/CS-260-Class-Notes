//                             07/23/19
///////////////////////////////////////////////////////////////////////////////
/*
        Euler Tours/Tree Trarerjals
        What are they, and how are they usefull?
        The Euler tours is the tracing of the tree, visiting each node 3 times.
        1) Right side - Pre-order
        2) Left side - In-order
        3) Bottom - Post-order
        See a diagram of the tree functionally.
        //I see what it means when we say each node is visited three times.
        //However the descriptions are tedious, look at Cooper's notes.
                           P
                         S        E
                       A | M    L |  R
                          A        T | E
                                     E |

      Pre-order: psamallrtee
      In-order: asampletree
      Post-oreder: aamslteerep
*/

//Recursive funcion for Euler tour.
void EulerTour(struct Node* node){
  if (node != 0){
    beforeLeft(node);
    EulerTour(node->left);
    inBetween(node);
    EulerTour(node->right);
    afterRight(node);
  }
}

void beforeLeft(Node n) { pfintf("()")};
void inBetween(Node n) { pfintf("%d\n", val)};
void afterRight(Node n) { pfintf(")")};

/*
                        +
                      a | *
                        + | d
                      b | c
      Pre-Oreder: +a*+bcd       //Polish notation (Prefix notation)
      In-Order: a + B + c * d   //Regular notation (Infix noation)
      Post-Order: abc+d*+       //Reverse polish notation (Post fix notation)

      Time complexity of this process is O(n).
*/


/*
///////////////////////   AVL Trees     ///////////////////////////////////////

        unbalanced BST -> O(n)
        Height balanced trees:
                  N
                L | R


            |Ln - Rn| <= 1
            This causes the worst time complexity possible is 44% of O(log(n))
                -> O(1.44log(n)) -> O(log(n)).
            With this concpet in use, the tree must always be blanced to gain
            from this effect. So resuffling the tree when adding and deleting
            data will be necessary.

        Adelson-Velskii and Landis Tree: (AVL Tree)
        EX:

                                  3
                                2 |    8
                              1 |    5 | 9
                                   4 | 6

        Review how determine |Ln - Rn| <= 1, and determining if a tree is
        balanced. d = difference = |Ln - Rn|
        Steps:
          1) Determine if the tree is balanced or unbalanced.
          2) Determine which nodes are unbalanced.


        So you found an unbalanced tree, what do you do?()
        Rotations  //"Rotating" position to balance the tree.

               100                              120                            100
          50    |       120              100     |       130               50       110
                 110     |  130   =>   50 | 110                    =>                  120
                  |  115                     |  115                                 115  130


                     110
       =>        100     120          Which is a balanced tree.
               50     115   130

              1)Rotate low, moving upfrom the leaves of the tree.
              EX:

                1                                           2
                  2        => roation about root  =>      1   3
                    3
*/

//                                 7/24/19
////////////////////////////////////////////////////////////////////////////////
/*
    Review: Yesterday we learned.
      1) Tree construction
        - Binary Search Trees
      2) Longest path between 2 nodes.
      3) Nomenclature
        - Root node
        -Internal nodes
        -Leaf nodes
        -height
        -depth

    AVL trees
      - These are height balanced trees, to simplify and speed up operations
      performed on them.
      |Ln - Rn| <= 1
      -> O(1.44log(n)) -> O(log(n)).
      *Practice the height determination and rotation operations.

    Rotations:
      "How do we fix an unbalanced tree?" -> rotations.
      

*/
