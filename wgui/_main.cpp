// wgui.cpp: 定义控制台应用程序的入口点。
//
#include "html_document.h"
#include <Shlwapi.h>
#include <assert.h>


namespace wgui {

class application
{
public:
  application() {

  }

  ~application() {

  }

public:
  int run() {
    // Init instance
    int retval = initinstance();
    if( retval != 0 )
      return retval;

    // Main loop
    retval = loop();    

    // Exit instance
    exitinstance();

    return retval;
  }



private:
  int loop()
  {
    //while( GetMessage( &msg ) )
    //{

    //}
    return 0;
  }

public:
  virtual int initinstance() = 0;
  virtual void exitinstance() = 0;
};

}



class myapplication 
  : public wgui::application
{
public:
  myapplication() {

  }

  ~myapplication() {

  }

// Overrides
public:
  virtual int initinstance() {
    return 0;
  }


  virtual void exitinstance() {

  }
};















int main( int argc, char* argv[] ) {
  wgui::html::document doc;


  std::string path( argv[0] );

  ::PathRemoveFileSpecA( ( LPSTR )path.c_str() );
  
  std::string filename( path.c_str(), strlen( path.c_str() ) );
  filename += "\\..\\testhtml.html";
  filename += "\\..\\testhtml2.html";


  FILE* testhtml = fopen( filename.c_str(), "rb" );
  assert( testhtml != NULL );

  if( testhtml ) {
   
    char buf[1024] = {0};
    while( !feof( testhtml ) )
    {
      size_t r = fread( buf, sizeof( char ), sizeof( buf ), testhtml );
      doc.render( buf, r );
    }

  }

  //std::string content = "<html></html>";
  //doc.render( content );
  //parser.parse( context );

  //std::string outerHTML;
  //doc.toOuterHTML( outerHTML );

  //myapplication app;
  //return app.run();

  return 0;
}

