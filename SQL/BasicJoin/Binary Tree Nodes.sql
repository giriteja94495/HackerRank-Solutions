--https://www.hackerrank.com/challenges/binary-search-tree-1/problem

select 
case 
when P is NULL then concat(N,' Root')
when N in (select distinct P from BST) then concat(N,' Inner')
else concat(N,' Leaf')
end
from BST order by N asc;
