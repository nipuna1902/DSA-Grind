# Write your MySQL query statement below
delete p
from Person p
join person e
on p.email=e.email
and p.id>e.id;