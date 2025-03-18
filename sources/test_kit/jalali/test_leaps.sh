# Source of truth: https://calendar.ut.ac.ir/documents/2139738/7092644/Kabise+Shamsi+1206-1498.pdf
# Visit https://calendar.ut.ac.ir for more information
echo "Comparing computed leap years according to https://calendar.ut.ac.ir"
./list_leap | diff ./leaps_1206_1498.txt -
