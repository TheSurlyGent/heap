/*

Heap:
	An array visualized as a nearly complete Binary tree

	every parent node has two kid nodes
	heap is nearly complete because at the last layer, last leaf, might be incomplete

	[5,10,20,50,35,15,100] = heap binary tree

		  1(5)
	   2(10)  3(20)
    4(50)  5(35)  6(15)

	  Max Heap -> every parent is > its children
	  max hipify  build max heap
	  Min Heap -> every parent is < its children
					     children >

Parent(i) = [(i/2)floor]

left(i) = [2i]

right(i) = [2i + 1]
***************************************************************************************************
HEAP OPERATIONS
***************************************************************************************************

 -> Heap
		Max head

 -> Heap
		Max_heapify

		Build_Max_heap

 -> Heap Sort
				  A
				i=1(16)
	     i=2 (4)      i=3(10)
	4(11)      (3) (9)      (8) 
  (1)    (5)
   
  
  void? 
  Max_heapify(A,i) //heap// , //index//

	  1 2  3  5 5 6 7 8 9
  A=[16,4,10,11,3,9,8,1,5]
  i = 2
  swap 4 and 11
  swap i2 with its child at i4
  since a max heap parent > child
		  A
				i=1(16)
		 i=2 (1)      i=3(10)
	4(4)      (3) (9)      (8)
  (1)    (5)

  swap 4 9

  max_heapifiy(A,i)
  l = left(i) 2i A[ 2i ]
  r = right(i) 2i + 1 A[2i + 1]
  if(a[l] > a[i] && l <= A.size)
  {
  largest = l

  else
  {
	largest = i;

  }

  }
  if A[r] > A[largest] && r <= A.size
  largest = r
  if largest != i
	swap(A[i],A[largest])


  output: correction of single violation
*/

#include <iostream>

int Main()
{


	return 0;
}