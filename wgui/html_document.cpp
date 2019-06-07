#include "html_document.h"

namespace wgui { namespace html {

document::document()
  : html_get_( false )
  , body_get_( false )
  , parsing_( false )
{

}


document::~document()
{
}

const char* document::render( const char* str, size_t size )
{
  const char* p = str;
  const char* endp = str + size;
  char c = '\0'; 

  if( size == 0 )
  {
    return NULL;
  }



  if( parsing_ )
  {
    switch( parsing_type_ )
    {
    case element::node:
      break;
    
    case element::comment:
      break;
    }
  }
  else
  {
    // Parse new
    if( *p == '<' )
    {
      // Tag node or comment node
      //parsing_type_ = element::node;
    } 
    else 
    {
      // Text node
      parsing_type_ = element::text;
    }

    // Start parsing
    parsing_ = true;

    // Return
    return render( p+1, size - 1 );
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
  //}
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
