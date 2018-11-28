EST(Humain, Test1) {
  const Humain alex("Alex", HOMME, 35);

  EXPECT_STREQ(alex.getNom().c_str(), "Alex");
  EXPECT_EQ(alex.getGenre(), HOMME);
  EXPECT_EQ(alex.getAge(), 35);
}

TEST(Humain, Test2) {
  Humain thomas("thomas", HOMME, 26);

    thomas.setNom("conchita");
    thomas.setAge(27);
    thomas.setGenre(FEMME);

  EXPECT_STREQ(thomas.getNom().c_str(), "conchita");
  EXPECT_EQ(thomas.getGenre(), FEMME);
  EXPECT_EQ(thomas.getAge(), 27);
}

TEST(Machine, Test3) {
  Machine stylet("stylet Apple", 2*24*3600, 1);

  EXPECT_STREQ(stylet.getType().c_str(), "stylet Apple");
  EXPECT_EQ(stylet.getAutonomie(), 2*24*3600);
  EXPECT_EQ(stylet.getIfixit(), 1);
}

TEST(Robocop, Test4) {
  Humanoide robocop("Murphy", "Robocop 1.0", HOMME, 35);

  EXPECT_STREQ(robocop.getNom().c_str(), "Murphy");
  EXPECT_STREQ(robocop.getType().c_str(), "Robocop 1.0");
  EXPECT_EQ(robocop.getGenre(), HOMME);
  EXPECT_EQ(robocop.getAge(), 35);
  EXPECT_EQ(robocop.getIfixit(), 3);
}
