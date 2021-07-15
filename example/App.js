import * as React from 'react';
import {StyleSheet, View, Text, Alert} from 'react-native';

export default function App() {
  const [result, setResult] = React.useState();

  React.useEffect(() => {
    global.test1('Azaza', r => {
      console.log('dsalkjdsajlkdasjkldsaklj', r);
      setResult(r);
    });
  }, []);

  return (
    <View style={styles.container}>
      <Text>Result: {result}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});
