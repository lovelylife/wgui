#include "html_document.h"
#include <assert.h>


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


const char * document::_strchr(const char * str, size_t size, char ch) {
  const char* p = str;
  const char* endp = str+size;

  while( p <= endp ) {
    if( *p == ch ) {
      return p;
    }
  }

  return NULL;
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


  while( p <= endp )
  {
    if( *p == '<' )
    {
      if( parsing_ )
      {

      }
      else
      {
        parsing_ = true;
      }
    }
    else if( *p == '>' )
    {
      if( parsing_ )
      {
        // Push
        stack_.push_back( tagname_ );
        printf("push %s\n", tagname_.c_str() );
        tagname_.clear();
        parsing_ = false;
      }
      else
      {

      }
    }
    else
    {
      //if( parsing_ )
      {
        tagname_.append( p, 1 );
      }
      //else
      {

      }
    }

    p++;
  }


  //if( parsing_ )
  //{
  //  if( parsing_type_ == element::text )
  //  {
  //    const char* t = strchr( p, '<' );
  //    
  //  }
  //}
  //else
  //{
  //  // Parse new
  //  if( *p == '<' )
  //  {
  //    // Tag node or comment node
  //    //parsing_type_ = element::node;
  //    // <tag/>, 
  //    // <tag>xxx</tag>, 
  //    // <!-- comment -->,
  //    // <!--[]> <![]-->
  //    if( size == 1 )
  //    {
  //      // Parse end
  //      return NULL;
  //    }
  //    else
  //    {
  //      if( *( p+1 ) != '!' )
  //      {
  //        parsing_type_ = element::node; 
  //      }
  //      else
  //      {
  //        // comment

  //      }
  //    }
  //    const char* t = strchr( p, '>' );
  //    if( t == NULL )
  //    {
  //      
  //    }
  //    else
  //    {
  //      // Find a tag or comment 
  //      tagname_.assign( p+1, t-p );
  //    }
  //    
  //  } 
  //  else 
  //  {
  //    // Text node
  //    parsing_type_ = element::text;
  //  }

  //  // Start parsing
  //  parsing_ = true;

  //  // Return
  //  return render( p+1, size - 1 );
  //}

 
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


} } // namespace html } namespace wgui 
