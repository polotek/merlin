#ifndef SRC_MERLIN_H_
#define SRC_MERLIN_H_

#include <cstdlib>
#include <node.h>
#include <node_buffer.h>

#include <cassert>  // for assert()

#define MERLIN_VERSION "v0.0.1"

#define BAD_ARGUMENTS Exception::TypeError(String::New("Bad argument"))

namespace merlin {

// Ensure that merlin is properly initialised:
class Merlin {
  public:
    static Persistent<FunctionTemplate> constructor_template;

    Merlin();
    virtual ~Merlin();

  private:

    static Merlin init_;
};

} // namespace Merlin

#endif SRC_MERLIN_H_
