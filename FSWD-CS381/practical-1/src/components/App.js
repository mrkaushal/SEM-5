import logo from '../logo.svg';
import './App.css';
import Welcome from './Home/Home';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <h1 className="App-link">
          Hello World
        </h1>
        <Welcome />
      </header>
    </div>
  );
}

export default App;
