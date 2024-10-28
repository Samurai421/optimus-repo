int varT=0;

void pose1() {
  // put your main code here, to run repeatedly:
  if (1 == varT){
    rod_Der.write(90);
    rod_Izq.write(90);

    cad_Der.write(90);
    cad_Izq.write(90);
    /*"pie"*/
  }else{
    rod_Izq.write(0);
    rod_Der.write(180);

    cad_Izq.write(0);
    cad_Der.write(0);
    /*"coche"*/
  }
}
