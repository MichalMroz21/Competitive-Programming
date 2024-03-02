# Write your MySQL query statement below
SELECT patient_id, patient_name, conditions FROM Patients
WHERE INSTR(conditions, " DIAB1") <> 0 OR conditions LIKE('DIAB1%');


#OR

#SELECT patient_id, patient_name, conditions FROM Patients
#WHERE conditions LIKE('% DIAB1%') OR conditions LIKE('DIAB1%');