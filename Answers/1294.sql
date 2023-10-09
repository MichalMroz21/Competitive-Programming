# Write your MySQL query statement below
SELECT A.country_name, IF(AVG(B.weather_state) >= 25, "Hot", IF(AVG(B.weather_state) > 15, "Warm", "Cold")) as weather_type
FROM Countries as A
INNER JOIN Weather as B ON (A.country_id = B.country_id AND B.day >= '2019-11-01' AND B.day <= '2019-11-30')
GROUP BY A.country_id
