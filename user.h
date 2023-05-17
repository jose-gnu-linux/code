
typedef struct
{
  short dia;
  short mes;
  int ano;
}Fecha;


typedef struct
{
  char *correo;
  char *password;
  char *nuevo;
  Fecha creado_en;

}User;
