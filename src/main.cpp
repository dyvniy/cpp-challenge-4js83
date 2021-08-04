#include "balance.hpp"
#include "order.hpp"

#include <iostream>
#include <string>
#include <vector>

using challenge::Balance;
using challenge::LimitPolicy;
using challenge::MarketPolicy;
using challenge::Order;

struct ClassDescriptorProperty {
    std::string key;
    std::string type;
    bool optional;
};

struct ClassDescriptor {
    std::string name;
    std::vector<ClassDescriptorProperty> properties;
};

class ObjectRegistry {
private:
    ObjectRegistry() {};
    std::vector<ClassDescriptor> descriptors;

public:
    static ObjectRegistry &instance() {
        static ObjectRegistry _instance;
        return _instance;
    }
    void append(ClassDescriptor &descriptor) {
        this->descriptors.push_back(descriptor);
    };
    std::string render() { return "Render objects here"; };
};

template <typename T> 
class Binder {
public:
    Binder(std::string cls_name) {

    };
    ~Binder() {

    };
    template <typename Attribute>
    void set(std::string name, Attribute attribute){

    };
};

int main(int argc, char *argv[]) {

    { 
        Binder<MarketPolicy> binder("MarketPolicy"); 
    }

    {
        Binder<LimitPolicy> binder("LimitPolicy");
        binder.set("price", &LimitPolicy::price);
        binder.set("stop", &LimitPolicy::stop);
    }

    {
        Binder<Order> binder("Order");
        binder.set("symbol", &Order::symbol);
        binder.set("quantity", &Order::quantity);
        binder.set("is_buy", &Order::is_buy);
        binder.set("policy", &Order::policy);
    }

    {
        Binder<Balance> binder("Balance");
        binder.set("free", &Balance::free);
        binder.set("locked", &Balance::locked);
    }

    std::cout << ObjectRegistry::instance().render() << std::endl;
};