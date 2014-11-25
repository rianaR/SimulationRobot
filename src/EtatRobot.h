#ifndef DEF_ETATROBOT
#define DEF_ETATROBOT
class EtatRobot {

	public:
		virtual std::string getName()=0;
		virtual EtatRobot *tourner()=0;

	protected:
		EtatRobot() {}
		~EtatRobot() {}

};

#endif
