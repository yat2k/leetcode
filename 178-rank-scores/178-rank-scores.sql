# Write your MySQL query statement below
select score, (select count(s2.score) from (select distinct score from scores ) s2
where s2.score >= s1.score ) AS "RANK"
from scores s1
order  by score desc