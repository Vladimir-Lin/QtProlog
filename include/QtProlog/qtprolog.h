/****************************************************************************
 *                                                                          *
 * Copyright (C) 2001 ~ 2015 Neutrino International Inc.                    *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_PROLOG_H
#define QT_PROLOG_H

#include <QtCore>
#include <QtNetwork>
#ifndef QT_STATIC
#include <QtScript>
#endif

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTPROLOG_LIB)
#    define Q_PROLOG_EXPORT Q_DECL_EXPORT
#  else
#    define Q_PROLOG_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_PROLOG_EXPORT
#endif

class Q_PROLOG_EXPORT QtProlog ;

class Q_PROLOG_EXPORT QtProlog
{
  public:

    explicit QtProlog (void) ;
             QtProlog (const QtProlog & prolog) ;
    virtual ~QtProlog (void) ;

  protected:

  private:

} ;

Q_DECLARE_METATYPE(QtProlog)

QT_END_NAMESPACE

#endif
