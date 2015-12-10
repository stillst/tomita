FIO -> Word<h-reg1, gram='имя'> interp (FIO.Name)
       Word<h-reg1, gram='отч'> interp (FIO.Patronymic)
       Word<h-reg1, gram='фам'> interp (FIO.Surname)|

       Word<h-reg1, gram='имя'> interp (FIO.Name)
       Word<h-reg1, gram='фам'> interp (FIO.Surname)|

       Word<h-reg1, gram='фам'> interp (FIO.Surname)
       Word<h-reg1, gram='имя'> interp (FIO.Name)|

       Word<h-reg1, gram='фам'> interp (FIO.Surname)
       AnyWord<wff=/[А-Яа-я]{1}./>  interp (FIO.Name)
       AnyWord<wff=/[А-Яа-я]{1}./>  interp (FIO.Patronymic)|

       Word<h-reg1, gram='фам'> interp (FIO.Surname)
       AnyWord<wff=/[А-Яа-я]{1}./>  interp (FIO.Name)|

       Word<h-reg1, gram='имя'> interp (FIO.Name)|

       Word<h-reg1, gram='фам'> interp (FIO.Surname)
       ;