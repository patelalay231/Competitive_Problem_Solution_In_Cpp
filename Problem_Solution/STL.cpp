#include <bits/stdc++.h>
using namespace std;

//pairs
void explainPair(){
	pair<int,int> p={1,2};
	cout << p.first << " " << p.second << endl;

	pair<int, pair<int,int>> p1 = {1,{2,3}};

	cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

	pair<int,int> arr[] ={{1,2},{2,3},{3,4}};

	cout << arr[4].first << " " << sizeof(arr)/sizeof(arr[0]);
}

//vectors
void explainVector(){
	vector<int> v;

	v.push_back(1); 
	v.emplace_back(2); 

	vector<pair<int,pair<int,int>>> v1;

	v1.push_back({1,{1,2}});

	vector<int> v2(5,100); // {100,100,100,100,100}
	vector<int> v3(v2); // v3 = {100,100,100,100,100}
	v3.push_back(10);
	v3.push_back(20);

	for(vector<int>::iterator it=v3.begin();it!=v3.end();it++){
		cout << *(it)<< " ";
	}
	cout << endl;

	/*
	rend,rbegin - reverse interation of vector
	*/

	for(auto it=v3.rbegin();it!=v3.rend();it++){
		cout << *(it)<< " ";
	}
	cout << endl;

	cout << v3.back() << " " << v3.at(2) << " " << v3.front() << endl;

	//{100 100 100 100 100 10 20}
	v3.erase(v3.begin()+5);
	//{100 100 100 100 100 20}
	v3.erase(v3.begin()+1,v3.begin()+4);
	for(auto it: v3){
		cout << it << " ";
	}
	cout << endl << v3.size() << endl;

	//Insert Function

	vector<int> v4(2,11);
	v4.insert(v.begin(),22);

}	

void printlist(list<int> li)
{
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

//same as vector and deque
void explainList(){
	list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);
    
    cout<<"The elements in the list are: ";
    printlist(li);
    cout<<"Reversing the list: ";
    li.reverse();
    printlist(li);
    cout<<"Sorting the list: ";
    li.sort();
    printlist(li);
    cout<<"The size of the list is: "<<li.size()<<endl;
    cout<<"The first element in the list: "<<li.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    li.pop_front();
    printlist(li);
    cout<<"The last element of the list: "<<li.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    li.pop_back();
    printlist(li);
}


//stack
void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}


void explainStack(){
	stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    printstack(s);
}

void explainQueue(){
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	// 1 2 3
	q.pop();
	// 2 3
	q.push(5);
	//2 3 5
	q.front()+=5;
	cout << q.front() << " " << q.back();

	//size swap empty same as stack
}



void explainPriorityQueue(){
	priority_queue<int> pq;
	pq.push(5);
	pq.push(4);
	pq.push(10);

	cout << pq.top();
	pq.pop();

	cout << endl << pq.top() << endl;

	//minimum heap
	priority_queue<int,vector<int>,greater<int>> pq1;
	pq1.push(5);
	pq1.push(4);
	pq1.push(10);
	pq1.push(3);

	cout << pq1.top();
	pq1.pop();

	cout << endl << pq1.top() ;

}

//set - store unique and sorted elements
void explainSet(){
	set < int > s;
	for (int i = 1; i <= 10; i++) {
		s.insert(i);
	}

	cout << "Elements present in the set: ";
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << * it << " ";
	}
	cout << endl;
	int n = 2;
	if (s.find(2) != s.end())
		cout << n << " is present in set" << endl;

	s.erase(s.begin());
	cout << "Elements after deleting the first element: ";
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << * it << " ";
	}
	cout << endl;

	cout << "The size of the set is: " << s.size() << endl;

	if (s.empty() == false)
		cout << "The set is not empty " << endl;
	else
		cout << "The set is empty" << endl;
	s.clear();
	cout << "Size of the set after clearing all the elements: " << s.size();
}

void explainMultiSet(){
	multiset < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }
  s.insert(5);
  cout << "Elements present in the multiset: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in multiset" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the multiset is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The multiset is not empty " << endl;
  else
    cout << "The multiset is empty" << endl;
  s.clear();
  cout << "Size of the multiset after clearing all the elements: " << s.size();
}

int main()
{
	// explainPair();
	// explainVector();
	// explainList();
	// explainStack();
	// explainQueue();
	// explainPriorityQueue();
	// explainSet();
	explainMultiSet();
	return 0;
}

