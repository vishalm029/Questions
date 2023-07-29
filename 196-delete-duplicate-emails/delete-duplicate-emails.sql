# Write your MySQL query statement below
#delete p1 from Person p1, Person p2 where p1.Id > p2.Id and p1.Email = p2.Email;
delete p from person as p, person as s where p.id>s.id and p.email=s.email;