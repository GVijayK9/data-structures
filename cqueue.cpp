#include<iostream>
using namespace std;
int cq[5],n=5,front=-1,rear=-1;
void insertcq(int val)
{
	if((front==0&&rear==n-1)||(front>=rear+1))
	{
	cout<<"circular queue is full"<<endl;
	cout<<"we are unable to insert anymore elements in the circular queue"<<endl;
    }
    else if (front==-1)
    {
    	front=0;
    	rear=0;
	}
	else
	{
		if(rear==n-1)
		{
			rear=0;
		}
		rear=rear+1;
	}
	cq[rear]=val;
}
void deletecq()
{
	if(front==-1)
	{
		cout<<"circular queue is empty"<<endl;
		cout<<"circular queue is underflow and we are unable to delete anymore elements from circular queue"<<endl;
	}
	cout<<"the deleted element from the circular queue is "<<cq[front]<<endl;
	 if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		if(front==n-1)
		{
			front=0;
		}
		front=front+1;
	}
}
	void displaycq()
	{
		if(front==-1)
		{
			cout<<"circular queue is empty"<<endl;
		}
		else
		{
			cout<<"the elements of circular queues are "<<endl;
			if(front<=rear)
			{
				while(front<=rear)
				{
					cout<<cq[front]<<" ";
					front++;
				}
			}
			else
			{
				while(front<=n-1)
				{
					cout<<cq[front]<<" ";
					front++;
				}
				front=0;
			}
			while(front<=rear)
			{
				cout<<cq[front]<<" ";
				front++;
			}
			
		}
	}
	int main()
	{
		int val,ch;
		cout<<"1.insert an element into circular queue"<<endl;
		cout<<"2.delete an element into circular queue"<<endl;
		cout<<"3.display element in circular queue"<<endl;
		cout<<"4.exit"<<endl;
		do
		{
			cout<<"enter your choice"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1 :
					cout<<"enter the element to be inserted"<<endl;
					cin>>val;
					insertcq(val);
					break;
				case 2:
					deletecq();
					break;
				case 3:
					displaycq();
					break;
				case 4:
					cout<<"exit"<<endl;
					break;
			    default:cout<<"invalid option"<<endl;
			}
			
		 }while(ch!=4);
	return 0;
		
	}

