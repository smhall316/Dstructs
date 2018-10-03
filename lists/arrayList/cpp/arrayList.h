//
// ARRAYLIST.H
// Scott Hall
//
// Header for arrayList.cpp
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList {

// Set the members protected so that they are accessible in the class that
// defines them and the classes that inherit them
protected:
  int m_maxSize;
  int m_length;
  int *m_list;

public:
  ArrayList(int size=100);
  ArrayList(const ArrayList &cpList);
 ~ArrayList();
  int getMaxSize() const;	// Recall: const after function declaration means we can call it on any const object while restricting change on class access specifiers
  int getLength() const;
  bool isEmpty() const;
  bool isFull() const;
  void clear();
  void insertAtEnd(const int value);
  void insertAtIndex(const int index, const int value);
  void print() const;
  bool isItemAtEqual(const int index, const int value) const;
  void removeAtIndex(const int index);
  void remove(const int value);
  int searchArrayList(const int value) const;

};

#endif
