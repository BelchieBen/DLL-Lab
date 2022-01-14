#include <string>

struct Node
{
   int key;
   std::string item;
   Node* next;
   Node* prev;

   Node() {

   }

   Node(int, std::string);
};

class DLLInterface
{
  public:
    virtual void insertFront(int, std::string) = 0;
    virtual void insertBack(int, std::string) = 0;
    virtual void insertAt(int, int, std::string) = 0;   // index, key, value
    virtual std::string* lookupByKey(int) = 0;
    virtual std::string* lookupByValue(const std::string&) = 0;
    virtual void removeByKey(int) = 0;
    virtual void removeByValue(const std::string&) = 0;
    virtual void displayEntries() = 0;
    virtual void displayEntriesReverse() = 0;
};