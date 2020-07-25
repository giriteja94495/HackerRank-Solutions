SELECT IF(B.Grade>7,A.Name,NULL),B.Grade,A.Marks 
FROM Grades B 
INNER JOIN Students A ON A.Marks BETWEEN B.Min_Mark and B.Max_Mark 
order by B.Grade desc, A.Name asc , A.Marks asc;
