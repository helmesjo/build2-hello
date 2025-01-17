#include <libwhat/what.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace what
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
