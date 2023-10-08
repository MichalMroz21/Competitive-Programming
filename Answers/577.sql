# Write your MySQL query statement below
SELECT e.name, b.bonus 
FROM Employee e
LEFT JOIN Bonus b USING(empId) #using prevents additional column "b.empId" from being created, we don't need that column. 
WHERE COALESCE(b.bonus, 0) < 1000;