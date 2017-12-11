#ifndef RUMMY_H
#define RUMMY_H


class Rummy
{
    Rummy(){}
    Rummy(const Rummy &iclass){instance_ = iclass.instance_;}
    Rummy &operator=(const Rummy &iclass);
    ~Rummy(){}

    static Rummy *instance_;

public:
    static Rummy &get();
};

#endif // RUMMY_H


