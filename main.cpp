#include <iostream>
#include <simpleble/SimpleBLE.h>

using namespace std;

int main() {

    cout << "Hello worlsdfd!" << endl;

    if (!SimpleBLE::Adapter::bluetooth_enabled()) {
      std::cout << "Bluetooth is not enabled" << std::endl;
      return 1;
   }

    auto adapters = SimpleBLE::Adapter::get_adapters();

   // Use the first adapter
   auto adapter = adapters[0];

   // Do something with the adapter
   std::cout << "Adapter identifier: " << adapter.identifier() << std::endl;
   std::cout << "Adapter address: " << adapter.address() << std::endl;

    return 0;
}