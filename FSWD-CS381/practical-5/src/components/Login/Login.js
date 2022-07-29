import React, { useState } from 'react';

import { 
  makeStyles, 
  Container, 
  Card, 
  TextField, 
  Button 
} from '@material-ui/core';

const useStyles = makeStyles(theme => ({
  root: {
    display: 'flex',
    flexDirection: 'column',
    justifyContent: 'center',
    alignItems: 'center',
    padding: theme.spacing(2),

    '& .MuiTextField-root': {
      margin: theme.spacing(1),
      width: '300px',
    },
    '& .MuiButtonBase-root': {
      margin: theme.spacing(2),
    },
  },
}));

const Login = ({ handleClose }) => {
  const classes = useStyles();
  // create state variables for each input
  const [username, setFirstName] = useState('');
  const [password, setPassword] = useState('');

  const handleSubmit = e => {
    e.preventDefault();
    console.log(username, password);
    handleClose();
  };

  return (
    <Container maxWidth="sm">
      <Card variant="outlined">
        <img src="https://www.instagram.com/static/images/web/logged_out_wordmark.png/7a252de00b20.png" alt="logo" />
        <form className={classes.root} onSubmit={handleSubmit}>
          <TextField
            label="Phone number, username, or email"
            variant="filled"
            required
            value={username}
            onChange={e => setFirstName(e.target.value)}
          />
          <TextField
            label="Password"
            variant="filled"
            type="password"
            required
            value={password}
            onChange={e => setPassword(e.target.value)}
          />
          <div>
            <Button type="submit" variant="contained" color="primary">
              Login
            </Button>
          </div>
        </form>
      </Card>
      <br />
      <Card variant="outlined">
        <div>
          Don't have an account? <a href="https://google.com">Sign up</a>
        </div>
      </Card>
    </Container>
  );
};

export default Login;
