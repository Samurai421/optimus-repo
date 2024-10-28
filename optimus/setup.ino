Servo cad_Izq;
Servo cad_Der;
Servo rod_Izq;
Servo rod_Der;
Servo pie_Izq;
Servo pie_Der;

void pines_setup() {
  cad_Izq.attach(12);
  cad_Der.attach(11);

  rod_Izq.attach(10);
  rod_Der.attach(9);

  pie_Izq.attach(8);
  pie_Der.attach(7);
}

void posicion_setup() {
  cad_Izq.write(0);
  cad_Der.write(0);

  rod_Izq.write(0);
  rod_Der.write(180); /*pose inicial 180, invertido*/

  pie_Izq.write(0);/*40(parado), 0(auto)*/
  pie_Der.write(140);/*140 (parado), 180 (auto)*/
}

void fase1() {
  pines_setup();
  posicion_setup();

}

