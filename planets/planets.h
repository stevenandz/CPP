#ifndef PLANETS_H
#define PLANETS_H

class AbstractWeight {
 public:
  virtual double calculate_weight() = 0;

  virtual const double GetSurfaceGravity() const = 0;

};

class Earth : public AbstractWeight {
 public:
  Earth() = default;
  explicit Earth(double weight_in_pounds) :
                 gravity_{9.8},
                 weight_in_pounds_{weight_in_pounds} {/**/}

  const double GetWeight() const {return weight_in_pounds_;}
  const double GetSurfaceGravity() const {return gravity_;}

 protected:
  double weight_in_pounds_;
  double gravity_;
};

class Mercury : public Earth {
 public:
  Mercury() = default;
  explicit Mercury(double weight_in_pounds) :
                   surface_gravity_{3.7},
                   Earth(weight_in_pounds) {/**/}

  const double GetSurfaceGravity() const {return surface_gravity_;}

  double calculate_weight() {
    return (surface_gravity_ / Earth::gravity_) * Earth::weight_in_pounds_;
  }

 private:
  double surface_gravity_;
};


class Mars : public Earth {
 public:
  Mars() = default;
  explicit Mars(double weight_in_pounds) :
                surface_gravity_{3.7},
                Earth(weight_in_pounds) {/**/}

  const double GetSurfaceGravity() const {return surface_gravity_;}

  double calculate_weight() {
    return (surface_gravity_ / Earth::gravity_) * Earth::weight_in_pounds_;
  }
  
 private:
  double surface_gravity_;
};

class Venus : public Earth {
 public:
  Venus() = default;
  explicit Venus(double weight_in_pounds) :
                surface_gravity_{8.87},
                Earth(weight_in_pounds) {/**/}

  const double GetSurfaceGravity() const {return surface_gravity_;}

  double calculate_weight() {
    return (surface_gravity_ / Earth::gravity_) * Earth::weight_in_pounds_;
  }
  
 private:
  double surface_gravity_;
};

class Jupiter : public Earth {
 public:
  Jupiter() = default;
  explicit Jupiter(double weight_in_pounds) :
                surface_gravity_{24.79},
                Earth(weight_in_pounds) {/**/}

  const double GetSurfaceGravity() const {return surface_gravity_;}

  double calculate_weight() {
    return (surface_gravity_ / Earth::gravity_) * Earth::weight_in_pounds_;
  }
  
 private:
  double surface_gravity_;
};

class Saturn : public Earth {
 public:
  Saturn() = default;
  explicit Saturn(double weight_in_pounds) :
                surface_gravity_{24.79},
                Earth(weight_in_pounds) {/**/}

  const double GetSurfaceGravity() const {return surface_gravity_;}

  double calculate_weight() {
    return (surface_gravity_ / Earth::gravity_) * Earth::weight_in_pounds_;
  }
  
 private:
  double surface_gravity_;
};

class Neptune : public Earth {
 public:
  Neptune() = default;
  explicit Neptune(double weight_in_pounds) :
                     surface_gravity_{11.15},
                     Earth(weight_in_pounds) {/**/}

  const double GetSurfaceGravity() const {return surface_gravity_;}

  double calculate_weight() {
    return (surface_gravity_ / Earth::gravity_) * Earth::weight_in_pounds_;
  }

 private:
  double surface_gravity_;
};

class Uranus : public Earth {
 public:
  Uranus() = default;
  explicit Uranus(double weight_in_pounds) :
                   surface_gravity_{8.87},
                   Earth(weight_in_pounds) {/**/}

  const double GetSurfaceGravity() const {return surface_gravity_;}

  double calculate_weight() {
    return (surface_gravity_ / Earth::gravity_) * Earth::weight_in_pounds_;
  }

 private:
  double surface_gravity_;
};

void read_planets(const std::string& filename,
                 std::unordered_set<std::string>& words_set);

bool is_valid_planet(const std::string& word,
                    std::unordered_set<std::string>& words_set);

template <typename data>
data prompt_for_data(std::string_view prompt);

#endif                                                                                              