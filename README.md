# On Site 파이썬 실무 교육

## 4.19(월) Anaconda 패키지의 설치와 python의 기본 습득
* Anaconda 패키지의 설치와 이용
  
`alias ana3='export PATH="/Users/nbeyond/opt/anaconda3/bin:$PATH"'`
* Jupyter notebook 활용과 기본적 구동원리 이해
* 오픈소스 문화에 기반한 코딩법 습득
* python 기본 문법 및 활용
  
## 4.20(화) 개발환경설정과 Pandas의 다양한 활용
* Shell에서의 개발환경 설정
* git의 간단 설명과 github을 통한 자료 습득 https://stackoverflow.com/questions/37805621/change-email-address-in-git
* Pandas의 다양한 활용

## 4.21(수) Time series data 예제와 응용
* [Time series 데이터 처리, 분석 및 데이터 시각화](https://medium.com/datadriveninvestor/how-to-build-exponential-smoothing-models-using-python-simple-exponential-smoothing-holt-and-da371189e1a1)
  - Simple Exponential Smoothing
  - Holt's Method
  - Seasonally Adjusted Data
  - Holt's Winters Seasonal
* [Customized python coding (Basemap)](https://blog.goodaudience.com/geo-libraries-in-python-plotting-current-fires-bffef9fe3fb7)
   - Basemap installation tips for those who have python 3.8.
   - https://pinkwink.kr/1199 (KSJ)
   - With python 3.6, you need to install matplotlib 3.2 version for the installation of basemap. (KSK)
      ```
      pip install -U matplotlib==3.2 
      ```
   - To test if basemap is properly installed, use the piece of the code in [the page](https://stackoverflow.com/questions/40374441/python-basemap-module-impossible-to-import).
      ```
      from mpl_toolkits.basemap import Basemap
      import matplotlib.pyplot as plt
      # setup Lambert Conformal basemap.
      # set resolution=None to skip processing of boundary datasets.
      m = Basemap(width=12000000,height=9000000,projection='lcc',
          resolution=None,lat_1=45.,lat_2=55,lat_0=50,lon_0=-107.)
      m.bluemarble()
      plt.show()
      ```
   ```
     pip install geopy
   ```
   - geolocator = Nominatim() -> geolocator = user_agent="my-application" (YohanCha)      

## 4.22(목) 오픈소스와 연계하여 python을 이용한 DIYs
* [Linear Regression 외](https://towardsdatascience.com/linear-regression-on-boston-housing-dataset-f409b7e4a155) 
* [세가지 형태의 Machine Learning](https://towardsdatascience.com/beginners-guide-to-the-three-types-of-machine-learning-3141730ef45d)
* [특화된 모듈 설치 (다양한 OS에서의 설치)](https://www.tensorflow.org/install)
* [A simple 2D CNN for MNIST digit recognition](https://towardsdatascience.com/a-simple-2d-cnn-for-mnist-digit-recognition-a998dbc1e79a)
* Python in action (Analytical solutions, ParaView, Raspberry Pi, etc) - 여력이 될 경우
  