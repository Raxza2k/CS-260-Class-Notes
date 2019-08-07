// 08/07/19

void removeMinHeap(DynArr* heap){
    int last;
    assert(sizeDynArr(heap) > 0);
    last = sizeDynArr(heap) - 1;
    putDynArr(heap, getDynArr(heap, last));
    removeDynArr(heap, last);
    _AdjustHeap(heap, last, 0)
    /*
        This function replaces the root with the last entry in the tree.
        The adjustment balances the tree ( > comparisons) upto but not including
            the last value.
    */
}

void _AdjustHeap(struct DynArr, int max, int pos){
    int leftIdx = pos * 2 + 1;
    int rightIdx = pos * 2 + 2;
    if(rightIdx <= max){
        //Do this check to see if you have one or two children.
        /* PARIS: Get the index of the smaller child (_minIdx())*/
        /* PARIS: Compare the smallest child with the paredn at [pos]*/
        /* PARIS:  If nessessary swap and call _AdjustHeap(heap, max, minIdx)*/
    }
    //This will implement if you only have one child.
    else if(leftIdx <= max){
            /* PARIS: Compare the child with the parent at [pos]*/
            /* PARIS: If nessessary swap and call _AdjustHeap(heap, max, leftIdx)*/
    }
}

//Read the _AdjustHeap function from the notes tonight.
