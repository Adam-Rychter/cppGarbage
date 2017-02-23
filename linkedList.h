
template<class T>
class List {
private:
  /* data */
  HeadNode<T> head;
  Node<T> *first;
  Node<T> *actual;
public:
  int push_back(T const&);
  int pop_back(T const&);
  T& get(int const);
  int clear();
  int const size();
  List<T> (arguments);
  virtual ~List<T> ();
};

template<class T>
class Node {
private:
  /* data */
  T data;
  Node<T>* prev;
  Node<T>* next;
public:
  void setData(T data);
  void setPrev(Node<T> *newPrev);
  void setNext(Node<T> *newNext);
  int getData(T data);
  Node<T>& getPrev(Node<T> *newPrev);
  Node<T>& getNext(Node<T> *newNext);
  Node<T> (T const&, Node<T> const&, Node<T> const&);
  virtual ~Node ();
};

template<class T>
class HeadNode {
private:
  /* data */
  int listSize;
  Node<T> *firstNode;
  Node<T> *lastNode;
public:
  HeadNode (arguments);
  virtual ~HeadNode ();
};
