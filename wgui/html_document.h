#pragma once

#include <string>
#include <list>



namespace wgui { namespace html {


class element 
{



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


public:
  typedef 
  enum __step 
  {
    intext = 0,
    intagname, 
    intag,
    completed
  } step;


private:
  body_element body_;
  int type_;
  std::list< std::string > stack_;
  std::string tagname_;
  step step_;  
};


} } // |
