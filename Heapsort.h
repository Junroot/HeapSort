//
//  Heapsort.h
//  HeapSort
//
//  Created by Junroot on 2016. 8. 29..
//  Copyright © 2016년 ROOT. All rights reserved.
//

#ifndef Heapsort_h
#define Heapsort_h

#include "MinHeap.h"
#include "stdlib.h"

void Heapsort(int arr[], int num)
{
    Heap* hp = (Heap*)malloc(sizeof(Heap));
    int i;
    HeapInit(hp);
    for (i=0; i<num; ++i)
    {
        HInsert(hp,arr[i]);
    }
    for (i=0; i<num; ++i)
    {
        arr[i]=HDelete(hp);
    }
    free(hp);
}

#endif /* Heapsort_h */
