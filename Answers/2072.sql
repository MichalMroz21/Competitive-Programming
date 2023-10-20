# Write your MySQL query statement below
SELECT IF((SELECT COUNT(score) FROM California WHERE score >= 90) > (SELECT COUNT(score) FROM NewYork WHERE score >= 90), "California University",  
IF((SELECT COUNT(score) FROM California WHERE score >= 90) < (SELECT COUNT(score) FROM NewYork WHERE score >= 90), "New York University", "No Winner")) AS winner