#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int queue[MAX], front = -1, rear = -1;
int
isFull ()
{
  return rear == MAX - 1;
}

int
isEmpty ()
{
  return front == -1;
}

void
enqueue (int value)
{
  if (isFull ())
	{
	  printf ("Queue overflow!!");
	}
  else
	{
	  queue[++rear] = value;	//Add the 'value' to the next available position in the queue.
	  if (front == -1)			//If the queue was previously empty
		front = rear;			//Set both 'front' and 'rear' to the position of the newly added element.
	  printf ("%d added in the queue!!", value);
	}
}

void
dequeue ()
{
  if (isEmpty () || front > rear)
	{							//Empty or underflow condition
	printf ("Queue underflow!!");}
  else
	{
	  int value = queue[front++];	//Retrieve the value of the element at the front of the queue amd them increment 
	  if (front > rear)
		front = rear = -1;		//Reset both 'front' and 'rear' pointers to indicate an empty queue.
	  printf ("%d removed from queue!!!", value);
	}
}

int
peek ()
{
  if (isEmpty () || front > rear)
	return -1;					//error condition
  else
	return queue[front];
}

void
display ()
{
  int i;
  if (isEmpty ())
	printf ("Queue is empty!!");
  else
	{
	  for (i = front; i <= rear; i++)
		printf ("%d\t", queue[i]);
	}
}

int
main ()
{
  int choice, val;
  while (1)
	{
	  system ("cls");
	  printf ("1.enqueue\n");
	  printf ("2.Dequeue\n");
	  printf ("3.Peek\n");
	  printf ("4.display\n");
	  printf ("5.Exit\n");
	  printf ("Enter choice:");
	  scanf ("%d", &choice);
	  switch (choice)
		{
		case 1:
		  printf ("enter value:");
		  scanf ("%d", &val);
		  enqueue (val);
		  break;
		case 2:
		  dequeue ();
		  break;
		case 3:
		  val = peek ();
		  if (val == -1)
			printf ("Queue is empty!!");
		  else
			printf ("%d is available in front of queue !!", val);
		  break;
		case 4:
		  display ();
		  break;
		case 5:
		  exit (0);
		  break;
		default:
		  printf ("Invalid choice!!");
		}
	  printf ("\n");
	  system ("pause");
	}
  return 0;
}
