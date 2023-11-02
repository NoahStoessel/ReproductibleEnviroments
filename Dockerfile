FROM gcc:latest AS build-stage
COPY . .
RUN gcc -c src/main.c src/calculations.c
#CMD ["ls"]
RUN gcc -o main main.o calculations.o

FROM archlinux:latest AS run-stage
COPY --from=build-stage main main
RUN chmod +x main
CMD ["./main"]