#encoding "utf-8"
#include <date.cxx>

FIO -> Word<h-reg1, gram='имя'> interp (FIO.Name)
       Word<h-reg1, gram='отч'> interp (FIO.Surname)
       Word<h-reg1, gram='фам'> interp (FIO.Patronymic);

S -> FIO (Date);