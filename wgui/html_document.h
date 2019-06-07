#pragma once

#include <string>
#include <list>



namespace wgui { namespace html {


class element 
{
public:
  typedef 
  enum _type
  {
    node,
    text,
    comment,
  } type;

};

class body_element
  : public element
{

};



class document 
{
public:
  document();
  ~document();

public:
  const char* render( const char* str, size_t size );
  void toOuterHTML(const std::string& o);



private:
  const char* parse_intext( const char* s, size_t size );
  const char* parse_intagname( const char* s, size_t size );
  const char* parse_intag( const char* s, size_t size );


private:
  body_element body_;
  int type_;
  std::list< std::string > stack_;
  std::string tagname_;
  element::type parsing_type_;
  bool parsing_;
  bool body_get_;
  bool html_get_;
};


} } // |
