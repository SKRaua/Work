# Maven

Apache Maven 是一个项目管理和构建工具，它基于项目对象模型(POM) 的概念，通过一小段描述信息来管理项目的构建。

作用：

* 方便的依赖管理
* 标准的项目构建流程
* 统一的项目结构

官网：[http://maven.apache.org](http://maven.apache.org)

什么是坐标？

Maven中的坐标是资源(jar)的唯一标识,通过该坐标可以唯一定位资源位置。使用坐标来定义项目或引入项目中需要的依赖。

```
    <!-- https://mvnrepository.com/artifact/org.springframework/spring context -->
    <dependency>
      <groupId>org.springframework</groupId>
      <artifactId>spring-context</artifactId>
      <version>6.1.4</version>
    </dependency>
    <exclusions>
        <exclusion>
          <groupId>io.micrometer</groupId>
          <artifactId>micrometer-observation</artifactId>
        </exclusion>
     </exclusions>
```

# Spring

术语 "Spring"
在不同的语境中意味着不同的东西。它可以用来指代Spring框架项目本身，它是一切的开始。随着时间的推移，其他Spring项目也被建立在Spring框架之上。大多数时候，当人们说
 "Spring" 时，他们指的是整个项目家族（全家桶）。这个参考文档的重点是基础：Spring框架本身。

Spring 框架被划分为多个模块。应用程序可以选择他们需要的模块。core
是核心容器的模块，包括一个配置模型和一个依赖注入机制。除此之外，Spring框架还为不同的应用架构提供了基础支持，包括消息传递、事务性数据和持久性以及Web。它还包括基于Servlet的
 Spring MVC Web 框架，以及并行的Spring WebFlux 响应式 web 框架。

关于模块的说明。Spring框架的jar允许部署到JDK
9的模块路径（"Jigsaw"）。为了在支持Jigsaw的应用程序中使用，Spring Framework 5的jar带有
"Automatic-Module-Name" 清单项，它定义了独立于jar artifact
名称的稳定的语言级模块名称（"spring.core"、"spring.context"
等）（jar遵循相同的命名模式，以"-"代替"."，例如 "spring-core" 和
"spring-context"）。当然，Spring框架的jar在JDK 8和9+的classpath上都保持正常工作。

# HTTP

Hyper Text Transfer Protocol，超文本传输协议，规定了浏览器和服务器之间数据传输的规则。
