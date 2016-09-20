# Computer Systems Organization : Recitation 03

- [Prime Numbers](#prime)
- [Linked List](#linked-list)

## Prime Numbers

A prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself (Wikipedia). You have also been asked to implement an efficient algorithm in the lab that yields the prime numbers smaller than some given n.

### Exercise

Create a C file (name it whatever you want) with a main method. Write a function `isPrime`:

```
	int isPrime(int n)
	{
		// TO DO: YOUR CODE HERE
	}
```

and have it return 1 or greater (for true) if n is prime and return 0 otherwise. Call this method in main with different numbers to test if your function works correctly. You do not have to try fancy algorithms to determine whether n is prime: the brute force approach is fine for this exercise.

## Linked List

In the linked_list directory there is a partial implementation of a linked list.

### Exercise

* The program in `main.c` creates a small linked list of size 6. Your task is to complete the `print_List` function in `list.c` which takes the address of the first item in the list as its sole argument. The function should print the contents of the list (i.e. the 'value' field of all nodes). 


