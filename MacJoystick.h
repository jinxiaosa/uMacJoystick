/************************************************************/
/*    NAME: Rui YANG                                              */
/*    ORGN: MIT                                             */
/*    FILE: MacJoystick.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef MacJoystick_HEADER
#define MacJoystick_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class MacJoystick : public CMOOSApp
{
 public:
   MacJoystick();
   ~MacJoystick();

 protected:
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();
   void RegisterVariables();

 private: // Configuration variables

 private: // State variables
   unsigned int m_iterations;
   double       m_timewarp;
};

#endif 
