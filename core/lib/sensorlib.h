// Universal sensor interface
class QSensor {
public:
    virtual void init() = 0;
    virtual float read() = 0;
    virtual String toJSON() = 0;
};
