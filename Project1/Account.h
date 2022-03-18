#include <string> 
class Account {
public:
    explicit Account(std::string accountName)
        : name{ accountName } { // member initializer
           // empty body. 
           // Name=accountName; is OK instead of member initializer
    }
    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }
private:
    std::string name;
};
