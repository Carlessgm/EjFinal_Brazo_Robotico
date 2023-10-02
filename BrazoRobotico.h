class BrazoRobotico{

	private:
		double x;
		double y;
		double z;
		int objsuj;
	public:
		BrazoRobotico(double x, double y, double z, int objsuj);
		int obtenerX();
		int obtenerY();
		int obtenerZ();
		int obtenerObjsuj();
		void coger();
		void soltar();
		void mover(double x, double y, double z);
};
