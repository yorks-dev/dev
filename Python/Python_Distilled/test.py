from asyncio.constants import ACCEPT_RETRY_DELAY
import csv

with open("dataset_2_116.csv", mode="r") as file:
    csvFile = csv.reader(file)

    total_urban_expense = 0
    total_urban_people = 0
    for line in csvFile:
        if line[3] == "Accepted":
            if line[1] == "URBAN":
                total_urban_expense += float(line[10])
                total_urban_people += 1

urban_exp_avg = total_urban_expense / total_urban_people
print(f"Average Urban Expense = {urban_exp_avg}")

with open("dataset_2_116.csv", mode="r") as file:
    csvFile = csv.reader(file)
    count_rural_g_urban_exp = 0
    for line in csvFile:
        if line[3] == "Accepted" and line[1] == "RURAL":
            if float(line[10]) > urban_exp_avg:
                count_rural_g_urban_exp += 1

print(count_rural_g_urban_exp)

with open("dataset_2_116.csv", mode="r") as file:
    csvFile = csv.reader(file)
    g_total_expense_urban = 0
    g_monthly_resturant_exp_urban = 0

    g_total_expense_rural = 0
    g_monthly_resturant_exp_rural = 0

    for line in csvFile:
        if line[3] == "Accepted" and line[1] == "URBAN":
            g_total_expense_urban += float(line[10])
            g_monthly_resturant_exp_urban += float(line[30])
        if line[3] == "Accepted" and line[1] == "RURAL":
            g_total_expense_rural += float(line[10])
            g_monthly_resturant_exp_rural += float(line[30])

    perc_resturant_exp_urban = (
        g_monthly_resturant_exp_urban / g_total_expense_urban * 100
    )
    perc_resturant_exp_rural = (
        g_monthly_resturant_exp_rural / g_total_expense_rural * 100
    )
print(perc_resturant_exp_urban - perc_resturant_exp_rural)

with open("dataset_2_116.csv", mode="r") as file:
    csvFile = csv.reader(file)
    g_total_expense_tob_intox = 0
    g_total_expense_rural_balanced_foodg = 0
    t2 = 0
    toi_cosm_urban = 0
    for line in csvFile:
        if (
            line[3] == "Accepted"
            and line[1] == "URBAN"
            and line[5] == "Youngsters - dominant"
        ):
            g_total_expense_tob_intox += float(line[21]) + float(line[22])
        if line[3] == "Accepted" and line[1] == "RURAL" and line[8] == "Balanced":
            t2 += 1
            g_total_expense_rural_balanced_foodg += (
                float(line[11])
                + float(line[12])
                + float(line[13])
                + float(line[14])
                + float(line[15])
                + float(line[16])
                + float(line[17])
                + float(line[18])
                + float(line[19])
                + float(line[20])
            )

        if line[3] == "Accepted" and line[1] == "URBAN":
            toi_cosm_urban += float(line[26])

print(
    g_total_expense_tob_intox, g_total_expense_rural_balanced_foodg / t2, toi_cosm_urban
)
