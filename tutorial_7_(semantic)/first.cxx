#encoding "utf-8"
ProperName -> Word<h-reg1, gram='имя'>
              Word<h-reg1, gram='отч'>
              Word<h-reg1, gram='фам'>;
S -> ProperName 'родиться'<gram='прош'> 'в' AnyWord<wff=/[1-2]?[0-9]{1,3}г?\.?/> ('год' <gram='ед, дат'>);


S -> 'у' (Adj<gnc-agr[1]>) Noun<kwtype='animal', gram='род', rt, gnc-agr[1]>;
S -> 'с' (Adj<gnc-agr[1]>) Noun<kwtype='animal', gram='твор', rt, gnc-agr[1]>;