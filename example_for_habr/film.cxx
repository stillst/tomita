#encoding "utf-8" 
#GRAMMAR_ROOT S

PersonName -> Word<h-reg1, nc-agr[1]> Word<h-reg1, nc-agr[1]>*; //имя собственное - цепочка, состоящая из  одного или более слов с большой буквы и согласованных между собой в числе и падеже
FilmName -> AnyWord<h-reg1, quoted>; //название фильма - слово с большой буквы в кавычках
FilmName -> AnyWord<h-reg1, l-quoted> AnyWord* AnyWord<r-quoted>; //то же самое, но для двух и более слов

GenreChain -> Word<kwtype=genre_type> interp (Film.Genre); //жанр - цепочка, которую грамматика берет из словаря из статьи с типом genre
Film -> 'фильм'; //в качестве шаблона может выступать конкретная лемма
Descr -> GenreChain | Film; //объединение двух ранее описанных шаблонов

Director -> PersonName interp (Film.Director); //цепочку PersonName необходимо положить в поле Director факта Film

S -> Descr Director<gram="род"> FilmName interp (Film.Name::not_norm); //так называемая терминальное правило - вершина дерева. Пример цепочки, попадающей под это правило: Комедия Владимира Меньшова "Любовь и голуби"
