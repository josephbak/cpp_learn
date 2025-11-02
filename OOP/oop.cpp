#include <iostream>
#include <vector>
#include <cmath>


class Point {
    protected:
        int x;
        int y;

    public:
        int getX() const {return x;}
        void setX(int newX) { x = newX; }

        int getY() const {return y;}
        void setY(int newY) { y = newY; }

    
    virtual void print() const{
        std::cout << "(" << x << ", " <<  y << ")" << std::endl;
    }

    double distanceTo(const Point& other) const{
        int xDiff = x - other.x;
        int yDiff = y - other.y;
        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    Point() : x(0), y(0){}
    Point(int x, int y) : x(x), y(y) {}

    static void printPoints(const std::vector<Point>& points){
        // static methods:
        // orginization
        // Point related methos, but not for a specific object
        std::cout << "We're going to print " << points.size() << " points." << std::endl;
        for(const auto& point : points) {
            point.print();
        }
    }

};

class XYZPoint : public Point {
    // inheritance --> IS something
    // composition --> HAS something
    int z;

    public:
        XYZPoint(int x, int y, int z): Point(x, y), z(z) {}
        void print() const override{
            std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
        }

};

class City {
    // composition
    Point location;
    std::string name;
    int population;

    public:
        City() : location(Point()), name("unknown"), population(0) {}
        City(Point location, std::string name, int population) 
            : location(location), name(name), population(population){}

        const Point& getLocation() {return location; }
        void setLocation(const Point& location) { this->location = location; }

        std::string& getName() {return name; }
        void setName(const std::string& name) { this->name = name; }

        int getPupulation(){ return population; }
        void setPopulation(int population) { this->population = population; }
};

int main() {
    XYZPoint p1 = XYZPoint(1, 2, 3);
    Point p2 = Point(3, 4);

    std::vector<Point*> points = {&p1, &p2};

    for (auto p : points) {
        p->print();
    }


    // p.print();

    // Point& point = p;
    // point.print();

    // City city = City(Point(5, 10), "NYC", 50);
    // city.setPopulation(400000);
    // city.setLocation(Point(50, 100));
    // city.setName("New city");
    // std::cout << city.getName() << std::endl;
    // std::cout << city.getPupulation() << std::endl;

    // Point p = Point(50, 100);
    // city.setLocation(p);

    // const Point& location = city.getLocation();
    // Point location = city.getLocation(); // copy
    // location.setX(50);
    // std::cout << location.getX() << std::endl;

    // std::cout << city.getLocation().getX() << std::endl;

    return 0;
}