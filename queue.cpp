#include<iostream>
using namespace std;
int queue[100],n=100,front=-1,rear=-1;
void insert()
{
	int val;
	if(rear==n-1)
	{
		cout<<"queue overflow"<<endl;
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		cout<<"insert the element in queue"<<endl;
		cin>>val;
		rear++;
		queue[rear]=val;
	}
}
void delete1()
{
	if(front==-1||front>rear)
	{
		cout<<"queue underflow"<<endl;;
	
	}
	else
	{
		cout<<" element deleted from queue is :"<<queue[front]<<endl;
		front++;
	}
}
void display()
{
	if (front==-1)
	cout<<"queue is empty"<<endl;
	else
	{
		cout<<"queue elements are :";
		for(int i=front;i<=rear;i++)
		cout<<queue[i]<<" ";
		cout<<endl;
	}
}
	int main()
	{
		int val,ch;
		cout<<"1.insert an element into queue"<<endl;
		cout<<"2.delete an element into queue"<<endl;
		cout<<"3.display element in queue"<<endl;
		cout<<"4.exit"<<endl;
		do
		{
			cout<<"enter your choice"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1 :
					insert();
					break;
				case 2:
					delete1();
					break;
				case 3:
					display();
					break;
				case 4:
					cout<<"exit"<<endl;
					break;
			    default:cout<<"invalid option"<<endl;
			}
			
		}while(ch!=4);
	return 0;
		
	}
