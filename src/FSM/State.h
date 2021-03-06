#ifndef STATE_H
#define STATE_H

#include <stdio.h>
#include <stdlib.h>
#include <string>

//#include "FSM.h"

class StateManager;

using namespace std;

class State{

 public:

  State(){};
  ~State(){};

  virtual void Enter(){};
  
  virtual void Execute(StateManager* fsm ){};
  
  virtual void Execute(){};
  virtual void Exit(){};
  
  virtual State * Transition(bool* stimuli){};

  virtual void Print(){};

  virtual string GetNameString(){};
  
 private:

  string name;

};
#endif
