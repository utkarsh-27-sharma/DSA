# Write your MySQL query statement below
select FirstName, LastName, City, State
from Person left join Address
on Person.PersonId = Address.PersonId
;

problem link: https://leetcode.com/problems/combine-two-tables/
