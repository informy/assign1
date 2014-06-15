/*nr 1.

Implement the double linked list named List, as template.
Use the  given List.hpp
struct ListNode contains the pointer on the previous, next element and has an object of type T
*/
/* The lists ends will be marked with nullptr
In this assignemnet you have to implement the standard constructor, empty and size, therefore the next public methods:
-Default constructor - List()
-bool empty() const;
-std::size_t type size() const;
Method size gives the length of the list.
Next to List.hpp you need another file, TestList.cpp, which contain the Unittests

end of point 1 */

#ifndef LIST_HPP
#define LIST_HPP

// List.hpp

template <typename T>
struct ListNode
{
ListNode():m_value(),m_prev(),m_next(nullptr) {}
ListNode (T const& v,ListNode* prev, ListNode* next) : m_value(v),m_prev(prev),m_next(next){}
T m_value;
ListNode* m_prev;
ListNode* m_next;
};

template <typename T>
struct ListIterator
{
public:
//not implemented yet
private:
	ListNode<T>* m_current_node;
};

template<typename T>
struct ListConstIterator
{
public:
//not implemented yet
private:
	ListNode<T>* m_node;
};


template<typename T>
class List
{
public:
//List();//Aufgabe 5.1 - default constructor
//virtual ~List(); 

//bool empty() const;

//std::size_t type size() const;


private:
	std::size_t m_size;
	ListNode<T>* m_first;
	ListNode<T>* m_last;
};



#endif



//nr.2
/*Implement the methods: push_front, push_back,pop_front,pop_back,front and back.
Test them all. A test could look like that:
TEST (it_schould_add_an_element_when_push_front_is_called)
{
List<int> list;
list.push_front(42);
CHECK_EQUAL(42, list.front());
}
*/



// nr.3
/*
Write the method clear, which erases all the elements of the list.
Recommended a pop_* method

TEST(it_should_be_empty_after_clearing)
{
List<int> list;
list.push_front(1)
list.push_front(2)
list.push_front(3)
list.push_front(4)
list.push_front(5)
list.clear()
CHECK (list.empty())
}
Implement the destructor with clear

*/



//nr.4
/*Implement iterator, add the next template in List.hpp and add methods where it is written: //not implemented yet:
template <typename T>
struct ListIterator
{
typedef ListIterator <T> Self ;
typedef ListNode <T> Node ;
typedef T * Pointer;
typedef T& Reference ;
typedef std::forward_iterat or_tag IteratorCategory ;
ListIterator () {} // not implemented yet
ListIterator ( ListNode <T >* n ) {} // not implemented yet
Reference operator *() const {} // not implemented yet
Pointer operator - >() const {} // not implemented yet
Self & operator ++() {} // not implemented yet
Self operator ++( int ) {} // not implemented yet
bool operator ==( const Self & x ) const {} // not implemented yet
bool operator !=( const Self & x ) const {} // not implemented yet
Self next () const
{
if ( m_node )
return ListIterator ( m_node - > m_next );
else
return ListIterator ( nullptr );
}
private :
// The Node the iterator is point to
ListNode <T >* m_node ;
};
*/











