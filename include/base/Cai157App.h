#ifndef CAI157APP_H
#define CAI157APP_H

#include "MooseApp.h"

class Cai157App;

template<>
InputParameters validParams<Cai157App>();

class Cai157App : public MooseApp
{
public:
  Cai157App(InputParameters parameters);
  virtual ~Cai157App();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* CAI157APP_H */
