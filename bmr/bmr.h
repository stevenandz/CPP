#ifndef BMR_H
#define BMR_H

class AbstractBMR {
public:
  virtual double calculate_bmr() = 0; 
};
   
// all classes inheriting from BMR 
// will need to implement calculate_bmr()
class BMR : public AbstractBMR { 
 public:
  BMR() = default;
  explicit BMR(double weight, double height, int age) noexcept;
   
  const double GetWeight() const {return weight_;}
  const double GetHeight() const {return height_;}
  const int GetAge() const {return age_;}
   
  void SetWeight(double weight);

  void SetHeight(double height);
   
  void SetAge(int age);
   
 protected:
  double weight_;
  double height_;
  int age_;
};
   
class Man : public BMR {
 public:
  Man() = default;
  explicit Man(double weight, double height, int age) noexcept :
              BMR(weight, height, age) {/**/} 
   
  double calculate_bmr();

};
   
class Woman : public BMR {
 public:
  Woman() = default;
  explicit Woman(double weight, double height, int age) noexcept :
                BMR(weight, height, age) {/**/}
   
  double calculate_bmr();

};
   
template <typename data>
data prompt_for_data(std::string_view prompt);

bool is_either(char letter) {return (letter == 'm') || (letter == 'w');}
                                                                        
#endif