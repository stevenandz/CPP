#include <string>
#include <iostream>
#include <cassert>

class Patient {
 public:
  Patient() = default;
  explicit Patient(std::string_view name, std::string_view condition, int age) :
                  name_{name},
                  condition_{condition},
                  age_{age} {/**/}

  explicit Patient(const Patient& other) :
                  name_{other.name_},
                  condition_{other.condition_},
                  age_{other.age_} {/**/}

  ~Patient() {/**/}

  Patient& operator=(const Patient& other) {
     name_ = other.name_;
     condition_ = other.condition_;
     age_ = other.age_;
     return *this;
  }
  
  friend std::ostream& operator<<(std::ostream& out, const Patient& person) {
    out << person.name_ << ',' << person.condition_ << ',' << person.age_;
    return out;
  }

  friend std::istream& operator>>(std::istream& in, Patient& person) {
    in >> person.name_ >> person.condition_ >> person.age_;
    return in;
  }

  inline const std::string_view GetName() const {return name_;}
  inline const std::string_view GetCondition() const {return condition_;}
  inline const int GetAge() const {return age_;}

 private:
  std::string name_;
  std::string condition_;
  int age_;
};