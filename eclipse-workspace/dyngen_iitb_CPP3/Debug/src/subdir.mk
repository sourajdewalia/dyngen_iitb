################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/dyngen_iitb_CPP3.cpp 

OBJS += \
./src/dyngen_iitb_CPP3.o 

CPP_DEPS += \
./src/dyngen_iitb_CPP3.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/souraj/dyngen_iitb/eclipse-workspace/dyngen_iitb_CPP3/tbxx -I/home/souraj/dyngen_iitb/eclipse-workspace/dyngen_iitb_CPP3/src/fem -I"/home/souraj/dyngen_iitb/eclipse-workspace/dyngen_iitb_CPP3/tbxx" -I"/home/souraj/dyngen_iitb/eclipse-workspace/dyngen_iitb_CPP3/src" -I"/home/souraj/dyngen_iitb/eclipse-workspace/dyngen_iitb_CPP3/src/fem" -I"/home/souraj/dyngen_iitb/eclipse-workspace/dyngen_iitb_CPP3/src/tbxx" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


