
class Singleton {
public:
   static Singleton& instance() {
      static Singleton singleton;
      return singleton;
   }
   // other interesting member functions

   Singleton(const Singleton& copy) = delete;
   Singleton& operator=(const Singleton& rhs) = delete;
private:
   Singleton() { }
};

int main() {
   [[maybe_unused]] Singleton& s = Singleton::instance();
   return 0;
}


//I see a class has been created, actually 2 classes, 

//Private Singleton

//Public    Singleton

//The private Singleton is also static, hiding data?

//this is a C++11 implementation of the Singleton design pattern that is  correctly-destroyed, and thread-safe.
