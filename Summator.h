#ifndef SUMMATOR_H
#define SUMMATOR_H

class Summator : public Reference {
  GDCLASS(Summator, Reference);

  int count;

 protected:
  static void _bind_methods();

 public:
  void add(int p_value);
  void reset();
  int get_total() const;

  Summator();
};

#endif  // SUMMATOR_H
