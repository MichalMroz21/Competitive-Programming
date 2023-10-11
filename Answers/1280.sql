# Write your MySQL query statement below
SELECT A.student_id, A.student_name, B.subject_name,
(SELECT COUNT(*) FROM Examinations AS C WHERE C.student_id = A.student_id AND C.subject_name = B.subject_name) AS attended_exams
FROM Students AS A
CROSS JOIN Subjects AS B
ORDER BY A.student_id, B.subject_name