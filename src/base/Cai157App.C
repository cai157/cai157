#include "Cai157App.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

template<>
InputParameters validParams<Cai157App>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

Cai157App::Cai157App(InputParameters parameters) :
    MooseApp(parameters)
{
  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  Cai157App::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  Cai157App::associateSyntax(_syntax, _action_factory);
}

Cai157App::~Cai157App()
{
}

// External entry point for dynamic application loading
extern "C" void Cai157App__registerApps() { Cai157App::registerApps(); }
void
Cai157App::registerApps()
{
  registerApp(Cai157App);
}

// External entry point for dynamic object registration
extern "C" void Cai157App__registerObjects(Factory & factory) { Cai157App::registerObjects(factory); }
void
Cai157App::registerObjects(Factory & factory)
{
}

// External entry point for dynamic syntax association
extern "C" void Cai157App__associateSyntax(Syntax & syntax, ActionFactory & action_factory) { Cai157App::associateSyntax(syntax, action_factory); }
void
Cai157App::associateSyntax(Syntax & /*syntax*/, ActionFactory & /*action_factory*/)
{
}
