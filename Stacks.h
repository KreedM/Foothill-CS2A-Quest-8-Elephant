// Derek Meng

// Stacks.h

#ifndef Stacks_h
#define Stacks_h

#include <vector>
#include <sstream>

class Stack_Int {
  private:
    std::vector<int> _data;

  public:
    size_t size() const {
      return _data.size();
    }

    bool is_empty() const {
      return _data.empty();
    }

    void push(int val) {
      _data.push_back(val);
    }

    int top(bool& success) const { 
      if(_data.empty()) {
        success = false;
        return 0;
      }
      else {
        success = true;
        return _data.back();
      }
    }

    bool pop() {
      if(_data.empty())
        return false;
      else {
        _data.pop_back();
        return true;
      }
    }

    bool pop(int& val) {
      if(_data.empty()) {
        val = 0;
        return false;
      }
      else {
        val = _data.back();
        _data.pop_back();
        return true;
      }
    }

    std::string to_string() const {
      std::ostringstream oss;
      oss << "Stack (" << _data.size() << " elements):\n";  

      char its = 0;
      for(auto it = _data.end(); --it != _data.begin();) {
        oss << *it << std::endl; //*it dereferences and gives the vector's value at that point

        if(++its == 10) {
          oss << "...\n";
          break;
        }
      }

      oss << "Elements, if listed above, are in increasing order of age.";

      return oss.str();
    }
    
    // Don't remove the following line
    friend class Tests;
};

class Stack_String {
  private:
    std::vector<std::string> _data;

  public:
    size_t size() const {
      return _data.size();
    }

    bool is_empty() const {
      return _data.empty();
    }

    void push(std::string val) {
      _data.push_back(val);
    }

    std::string top(bool& success) const { 
      if(_data.empty()) {
        success = false;
        return 0;
      }
      else {
        success = true;
        return _data.back();
      }
    }

    bool pop() {
      if(_data.empty())
        return false;
      else {
        _data.pop_back();
        return true;
      }
    }

    bool pop(std::string& val) {
      if(_data.empty()) {
        val = "";
        return false;
      }
      else {
        val = _data.back();
        _data.pop_back();
        return true;
      }
    }

    std::string to_string() const {
      std::ostringstream oss;
      oss << "Stack (" << _data.size() << " elements):\n";  

      char its = 0;
      for(auto it = _data.end(); --it != _data.begin();) {
        oss << *it << std::endl; //*it dereferences and gives the vector's value at that point

        if(++its == 10) {
          oss << "...\n";
          break;
        }
      }

      oss << "Elements, if listed above, are in increasing order of age.";

      return oss.str();
    }
    
    // Don't remove the following line
    friend class Tests;
};

#endif /* Stacks_h */
