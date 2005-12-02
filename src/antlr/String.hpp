#ifndef INC_String_hpp__
#define INC_String_hpp__

/* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: String.hpp,v 1.1 2005-12-02 15:38:02 tim Exp $
 */

#include <antlr/config.hpp>
#include <string>

#ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif

ANTLR_API ANTLR_USE_NAMESPACE(std)string operator+( const ANTLR_USE_NAMESPACE(std)string& lhs, const int rhs );
ANTLR_API ANTLR_USE_NAMESPACE(std)string operator+( const ANTLR_USE_NAMESPACE(std)string& lhs, size_t rhs );

ANTLR_API ANTLR_USE_NAMESPACE(std)string charName( int ch );

#ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
}
#endif

#endif //INC_String_hpp__
