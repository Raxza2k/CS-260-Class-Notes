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
