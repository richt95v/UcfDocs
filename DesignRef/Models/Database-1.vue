<!-- Tufts VUE 3.3.0 concept-map (Database-1.vue) 2020-08-17 -->
<!-- Tufts VUE: http://vue.tufts.edu/ -->
<!-- Do Not Remove: VUE mapping @version(1.1) jar:file:/home/dev/toolkit/vue/VUE.jar!/tufts/vue/resources/lw_mapping_1_1.xml -->
<!-- Do Not Remove: Saved date Mon Aug 17 20:06:24 EDT 2020 by dev on platform Linux 5.4.0-37-generic in JVM 11.0.7+10-post-Ubuntu-2ubuntu218.04 -->
<!-- Do Not Remove: Saving version @(#)VUE: built October 8 2015 at 1658 by tomadm on Linux 2.6.32-504.23.4.el6.x86_64 i386 JVM 1.7.0_21-b11(bits=32) -->
<?xml version="1.0" encoding="US-ASCII"?>
<LW-MAP xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
    xsi:noNamespaceSchemaLocation="none" ID="0" label="Database-1.vue"
    created="1597706425792" x="0.0" y="0.0" width="1.4E-45"
    height="1.4E-45" strokeWidth="0.0" autoSized="false">
    <resource referenceCreated="1597709184643" size="12967"
        spec="/home/dev/portfolio/5-CurrentProjects/2-Ucf/7-Docs/Models/Database-1.vue"
        type="1" xsi:type="URLResource">
        <title>Database-1.vue</title>
        <property key="File" value="/home/dev/portfolio/5-CurrentProjects/2-Ucf/7-Docs/Models/Database-1.vue"/>
    </resource>
    <fillColor>#FFFFFF</fillColor>
    <strokeColor>#404040</strokeColor>
    <textColor>#000000</textColor>
    <font>SansSerif-plain-14</font>
    <URIString>http://vue.tufts.edu/rdf/resource/fecaeb4f7f0001010028d976a79296d1</URIString>
    <child ID="6"
        label="UUTIndex&#xa;- ID&#xa;- SerialNumber&#xa;- ExtendedSerialNumber"
        layerID="1" created="1597706477910" x="153.0" y="205.0"
        width="163.0" height="68.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb517f0001010028d976d890d1ee</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="7"
        label="UUTInstance Table&#xa;- ID&#xa;- SessionID&#xa;- DeviceID&#xa;- Context&#xa;- TestSpec&#xa;- TestFixture&#xa;- Slot&#xa;- Status"
        layerID="1" created="1597706553713" x="530.5" y="168.5"
        width="141.0" height="143.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb537f0001010028d97601d04854</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="8" label="DeviceID = fk to ID" layerID="1"
        created="1597706553716" x="315.5" y="232.51501" width="215.5"
        height="14.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb547f0001010028d9761c2ab3ec</URIString>
        <point1 x="316.0" y="239.22238"/>
        <point2 x="530.5" y="239.80765"/>
        <ID1 xsi:type="node">6</ID1>
        <ID2 xsi:type="node">7</ID2>
    </child>
    <child ID="9"
        label="MeasurementData Table&#xa;- ID&#xa;- DataInstanceID&#xa;- GroupName&#xa;- Parameter&#xa;- Value&#xa;- TestTimeStamp"
        layerID="1" created="1597706670454" x="847.5" y="184.5"
        width="166.0" height="113.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb577f0001010028d976f370f14c</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="10" label="DataInstanceID = fk to ID" layerID="1"
        created="1597706670457" x="671.0" y="233.48103" width="177.0"
        height="14.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb587f0001010028d9762ca36e7f</URIString>
        <point1 x="671.5" y="240.21396"/>
        <point2 x="847.5" y="240.74811"/>
        <ID1 xsi:type="node">7</ID1>
        <ID2 xsi:type="node">9</ID2>
    </child>
    <child ID="11"
        label="TestSpecIndex Table&#xa;- ID&#xa;- Name&#xa;- Version&#xa;- DutType&#xa;- Description"
        layerID="1" created="1597706742251" x="530.5" y="5.5"
        width="141.0" height="98.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb5b7f0001010028d97699e5aa68</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="12" label="TestSpec = fk to ID" layerID="1"
        created="1597706742254" x="545.5" y="103.0" width="111.0"
        height="66.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb5c7f0001010028d97687a66882</URIString>
        <point1 x="601.0" y="168.5"/>
        <point2 x="601.0" y="103.5"/>
        <ID1 xsi:type="node">7</ID1>
        <ID2 xsi:type="node">11</ID2>
    </child>
    <child ID="13"
        label="TestLimits Table&#xa;- ID&#xa;- Specification&#xa;- GroupName&#xa;- Parameter&#xa;- Lolimit&#xa;- Hilimit&#xa;- Description"
        layerID="1" created="1597706851730" x="847.5" y="-9.5"
        width="166.0" height="128.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb5e7f0001010028d9766c5d2b18</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="14" label="Specification = fk to ID" layerID="1"
        created="1597706851733" x="671.0" y="47.5" width="177.0"
        height="14.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb5f7f0001010028d97647a3f3e4</URIString>
        <point1 x="671.5" y="54.5"/>
        <point2 x="847.5" y="54.5"/>
        <ID1 xsi:type="node">11</ID1>
        <ID2 xsi:type="node">13</ID2>
    </child>
    <child ID="16"
        label="TestProfileMap Table&#xa;- Specification&#xa;- ProfileName&#xa;- Description"
        layerID="1" created="1597706949425" x="153.0" y="20.5"
        width="163.0" height="68.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb607f0001010028d976b098849b</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="17" label="Specification = fk to ID" layerID="1"
        created="1597706949428" x="315.5" y="47.5" width="215.5"
        height="14.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb617f0001010028d976e8548a7d</URIString>
        <point1 x="530.5" y="54.5"/>
        <point2 x="316.0" y="54.5"/>
        <ID1 xsi:type="node">11</ID1>
        <ID2 xsi:type="node">16</ID2>
    </child>
    <child ID="19" label="Not used when serial numbers are not stored"
        layerID="1" created="1597707460112" x="162.0" y="295.0"
        width="155.0" height="53.0" strokeWidth="0.0" autoSized="false" xsi:type="text">
        <strokeColor>#404040</strokeColor>
        <textColor>#000000</textColor>
        <font>SansSerif-plain-14</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb637f0001010028d976a50b15d5</URIString>
        <richText>&lt;html&gt;
  &lt;head color="#000000" style="color: #000000"&gt;
    &lt;style type="text/css"&gt;
      &lt;!--
        body { margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; font-size: 12; font-family: Arial; color: #000000 }
        ol { margin-top: 6; font-family: Arial; vertical-align: middle; margin-left: 30; font-size: 12; list-style-position: outside }
        p { margin-top: 0; margin-left: 0; margin-right: 0; margin-bottom: 0; color: #000000 }
        ul { margin-top: 6; font-size: 12; margin-left: 30; vertical-align: middle; list-style-position: outside; font-family: Arial }
      --&gt;
    &lt;/style&gt;
    
  &lt;/head&gt;
  &lt;body&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      Not used when serial numbers are not stored
    &lt;/p&gt;
  &lt;/body&gt;
&lt;/html&gt;
</richText>
        <label>Not used when serial numbers are not stored</label>
    </child>
    <layer ID="1" label="Layer 1" created="1597706425809" x="0.0"
        y="0.0" width="1.4E-45" height="1.4E-45" strokeWidth="0.0" autoSized="false">
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb657f0001010028d976a4874e5c</URIString>
    </layer>
    <userZoom>1.25</userZoom>
    <userOrigin x="175.625" y="-142.24594"/>
    <presentationBackground>#202020</presentationBackground>
    <PathwayList currentPathway="0" revealerIndex="-1">
        <pathway ID="0" label="Untitled Pathway" created="1597706425790"
            x="0.0" y="0.0" width="1.4E-45" height="1.4E-45"
            strokeWidth="0.0" autoSized="false" currentIndex="0" open="true">
            <strokeColor>#B3993333</strokeColor>
            <textColor>#000000</textColor>
            <font>SansSerif-plain-14</font>
            <URIString>http://vue.tufts.edu/rdf/resource/fecaeb667f0001010028d976065e27a7</URIString>
            <masterSlide ID="2" created="1597706425832" x="0.0" y="0.0"
                width="800.0" height="600.0" locked="true"
                strokeWidth="0.0" autoSized="false">
                <fillColor>#000000</fillColor>
                <strokeColor>#404040</strokeColor>
                <textColor>#000000</textColor>
                <font>SansSerif-plain-14</font>
                <URIString>http://vue.tufts.edu/rdf/resource/fecaeb6e7f0001010028d9761db534ec</URIString>
                <titleStyle ID="3" label="Header"
                    created="1597706425923" x="328.5" y="174.5"
                    width="143.0" height="51.0" strokeWidth="0.0"
                    autoSized="true" isStyle="true" xsi:type="node">
                    <strokeColor>#404040</strokeColor>
                    <textColor>#FFFFFF</textColor>
                    <font>Gill Sans-plain-36</font>
                    <URIString>http://vue.tufts.edu/rdf/resource/fecaeb6f7f0001010028d976994feea6</URIString>
                    <shape xsi:type="rectangle"/>
                </titleStyle>
                <textStyle ID="4" label="Slide Text"
                    created="1597706425933" x="339.5" y="282.5"
                    width="121.0" height="35.0" strokeWidth="0.0"
                    autoSized="true" isStyle="true" xsi:type="node">
                    <strokeColor>#404040</strokeColor>
                    <textColor>#FFFFFF</textColor>
                    <font>Gill Sans-plain-22</font>
                    <URIString>http://vue.tufts.edu/rdf/resource/fecaeb6f7f0001010028d976f301151e</URIString>
                    <shape xsi:type="rectangle"/>
                </textStyle>
                <linkStyle ID="5" label="Links" created="1597706425936"
                    x="372.0" y="385.0" width="56.0" height="30.0"
                    strokeWidth="0.0" autoSized="true" isStyle="true" xsi:type="node">
                    <strokeColor>#404040</strokeColor>
                    <textColor>#B3BFE3</textColor>
                    <font>Gill Sans-plain-18</font>
                    <URIString>http://vue.tufts.edu/rdf/resource/fecaeb707f0001010028d976330b1bdb</URIString>
                    <shape xsi:type="rectangle"/>
                </linkStyle>
            </masterSlide>
        </pathway>
    </PathwayList>
    <date>2020-08-17</date>
    <modelVersion>6</modelVersion>
    <saveLocation>/home/dev/portfolio/5-CurrentProjects/2-Ucf/7-Docs/Models</saveLocation>
    <saveFile>/home/dev/portfolio/5-CurrentProjects/2-Ucf/7-Docs/Models/Database-1.vue</saveFile>
</LW-MAP>
