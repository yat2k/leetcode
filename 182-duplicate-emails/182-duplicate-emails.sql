# Write your MySQL query statement below
select distinct email as Email from Person p1
where exists(Select * from person p2
            where p2.email = p1.email
            and p1.id != p2.id)