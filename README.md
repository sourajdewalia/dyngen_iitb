# dyngen_iitb
- Raw Converted contains the files converted from the utility as it is.
- The FORTRAN code contained a lot of errors such as spelling mistakes of variable names (eg. word -> woro, whi -> mhi) due to conversion of poor quality scanned document to text. Due to this converted code shows a lot of errors. Even the "corrected COMMON BLOCKS" was not correct.
- MAIN.FOR contains complete code in one file with corrected commonblocks and variable names. This was used to convert to CPP code.
- Most of the mistakes are corrected in the MAIN.FOR (including common blocks). But the code still contains many mistakes.
- Earlier approach involved conversion of individual files and then trying to combine them. It created redundant commonblocks and was found too hard to debug. (dyngen_iitb_CPP2)
- Newer approach involved using MAIN.FOR ie complete code for conversion and then debugging it. It created only one common blocks structure and is easier to debug. (dyngen_iitb_CPP3)
