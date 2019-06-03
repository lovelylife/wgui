#include "html_document.h"

namespace wgui { namespace html {

document::document()
  : step_( intagname )
  , html_get_( false )
  , body_get_( false )
{

}


document::~document()
{
}

const char* document::render( const char* str, size_t size )
{
  const char* p = str;
  const char* endp = str + size;
  
  while( p < endp )
  {
    switch( *p )
    {
    case '<':
      break;

    case '>':
      break;

    ca
    }
  //switch( step_ )
  //{
  //case intext:
  //  return parse_intext( str, size );
  //  break;

  //case intagname:

  //  break;

  //case intag:
  //  break;

  //case completed:
  //  break;

  //default:
  //  return p;

  //};
  }
  // end while

  return p;  
}

void document::toOuterHTML( const std::string & o )
{

}

const char * document::parse_intext( const char * s, size_t size )
{
  return nullptr;
}

const char * document::parse_intagname( const char * s, size_t size )
{
  return nullptr;
}

const char * document::parse_intag( const char * s, size_t size )
{
  return nullptr;
}



} } // namespace html } namespace wgui 
