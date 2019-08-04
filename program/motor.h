#define przodl 7
#define tylp 9
#define tyll 8
#define przodp 10
#define PWM1 11
#define PWM2 6

void backward() {
  digitalWrite(tylp, HIGH);
  digitalWrite(tyll, HIGH);
  digitalWrite(przodl, LOW);
  digitalWrite(przodp, LOW);
  analogWrite(PWM1, 100);
  analogWrite(PWM2, 100);
}

void forward() {
  digitalWrite(tylp, LOW);
  digitalWrite(tyll, LOW);
  digitalWrite(przodl, HIGH);
  digitalWrite(przodp, HIGH);
  analogWrite(PWM1, 100);
  analogWrite(PWM2, 100);
}
void right() {
  digitalWrite(tylp, HIGH);
  digitalWrite(tyll, LOW);
  digitalWrite(przodl, HIGH);
  digitalWrite(przodp, LOW);
  digitalWrite(PWM1, HIGH);
  digitalWrite(PWM2, HIGH);
}
void left() {
  digitalWrite(tylp, LOW);
  digitalWrite(tyll, HIGH);
  digitalWrite(przodl, LOW);
  digitalWrite(przodp, HIGH);
  digitalWrite(PWM1, HIGH);
  digitalWrite(PWM2, HIGH);
}
void luz() {
digitalWrite(tylp, LOW);
digitalWrite(tyll, LOW);
digitalWrite(przodl, LOW);
digitalWrite(przodp, LOW);
digitalWrite(PWM1, HIGH);
digitalWrite(PWM2, HIGH);
}
