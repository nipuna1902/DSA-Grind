# Write your MySQL query statement below
select round(count(distinct a.player_id)/(select count(distinct player_id)from Activity),2)as fraction
from Activity a
join Activity b
on a.player_id=b.player_id
and b.event_date=date_add(a.event_date,interval 1 day)
where a.event_date=(
    select min(c.event_date)
    from Activity c
    where c.player_id=a.player_id
);