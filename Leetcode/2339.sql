# Write your MySQL query statement below
SELECT T1.team_name AS home_team, T2.team_name AS away_team 
FROM Teams AS T1
CROSS JOIN Teams AS T2 ON (T1.team_name <> T2.team_name)