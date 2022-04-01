
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
