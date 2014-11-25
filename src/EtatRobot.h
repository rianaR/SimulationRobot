#ifndef DEF_ETATROBOT
#define DEF_ETATROBOT
class EtatRobot {

	public:
		class IllegalCommandException{};
		virtual std::string getName()=0;
		virtual EtatRobot *tourner() { throw IllegalCommandException();}
		virtual void  peser() { throw IllegalCommandException();}
		virtual EtatRobot *figer()=0;
		virtual EtatRobot *rencontrerPlot()=0;
		virtual void repartir()=0;
		virtual void avancer()=0;
		
	protected:
		EtatRobot() {}
		~EtatRobot() {}

};

#endif
