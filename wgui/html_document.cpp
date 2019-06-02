#include "html_document.h"

namespace wgui { namespace html {

document::document()
  : step_( intagname )
{

}


document::~document()
{
}

const char* document::render( const char* str, size_t size )
{
  const char* p = str;
  const char* endp = str + size;

  switch( step_ )
  {
  case intext:
    break;

  case intagname:

    break;

  case intag:
    break;

  case completed:
    break;

  default:
    return p;

  };

  return p;  
}

void document::toOuterHTML(const std::string & o)
{

}



} } // namespace html } namespace wgui 
