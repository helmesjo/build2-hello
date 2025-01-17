#pragma once

#include <iosfwd>
#include <string>

#include <libwhat/export.hxx>

namespace what
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBWHAT_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
